#!/usr/bin/env python3

import json
import sys

def chord_id(chord):
    value_table = [ 1<<0,  1<<1,  1<<2,   1<<3,  1<<4,  1<<5,  1<<6,  #STKPWHR
        1<<7,1<<8,0,1<<9,0,1<<10,1<<11, #AO-*-EU
        1<<12,1<<13,1<<14,1<<15,1<<16,1<<17,1<<18,1<<19,1<<20,1<<21,  #FRPBLGTSDZ
        1<<22, # #
    ]
    steno_order = "STKPWHRAO-*-EUFRPBLGTSDZ#"
    value = 0
    index = 0
    for key_code, key_value in zip(steno_order, value_table):
        if index == len(chord):
            break
        if key_code == chord[index]:
            value += key_value
            index += 1
    return value

dictionary = json.load(open(sys.argv[1]))
definitions = []
for chord, word in dictionary.items():
    definitions.append((chord_id(chord), chord, word))

definitions.sort()

print('#include "progmem.h"')
print('#include "quantum.h"')
print()
print("#include <stdint.h>")
print()
print("#define STENO_DEF(chord, word, keycode) static const char string_##keycode [] PROGMEM = word")
print("#define STENO_WORD_COUNT %dUL\n" % len(definitions))

for chord_code, chord, word in definitions:
    print('STENO_DEF("%s", "%s", \t\t%d);' % (chord, word, chord_code))
print()

print("static const char * const steno_words[] PROGMEM = {")
for i, (chord_code, chord, word) in enumerate(definitions):
    if i % 8 == 0:
        print("\t", end='')
    print('string_%d,' % chord_code, end=' ')
    if (i + 1) % 8 == 0 and i != len(definitions) - 1:
        print()
print("\n};")
print()

print("static const uint32_t chords[] PROGMEM = {")
for i, (chord_code, chord, word) in enumerate(definitions):
    if i % 8 == 0:
        print("\t", end='')
    print('%dUL,' % chord_code, end=' ')
    if (i + 1) % 8 == 0 and i != len(definitions) - 1:
        print()
print("\n};")
print()

print("""
bool process_chord(uint32_t chord) {
    int32_t lower = 0L;
    int32_t upper = STENO_WORD_COUNT - 1L;
    while (lower <= upper) {
       int32_t middle = lower + ((upper - lower) / 2);
       uint32_t midChord = (uint32_t)pgm_read_dword(&chords[middle]);
       if (midChord < chord) {
          lower = middle + 1L;
       } else if (midChord > chord) {
            upper = middle - 1L;
       } else {
            send_string_P((char *)pgm_read_word(&steno_words[middle]));
            SEND_STRING(" ");
            return false;
       }
    }
    return true;
}
""")
