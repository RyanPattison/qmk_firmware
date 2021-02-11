#!/usr/bin/env python3

import json
import sys

def chord_id(chord):
    value_table = [
        1<<0,1<<1,1<<2,1<<3,1<<4,1<<5,1<<6,1<<7, #STKPWHR
        1<<8,1<<9,0,1<<10,0,1<<11,1<<12, #AO-*-EU
        1<<13,1<<14,1<<15,1<<16,1<<17,1<<18,1<<19,1<<20,1<<21,1<<22,  #FRPBLGTSDZ
        1<<23, # #
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
print()
print("#include <stdint.h>")
print()
print("#define STENO_WORD_COUNT %d\n" % len(definitions))
print("static const char * const steno_words[STENO_WORD_COUNT] PROGMEM = {")
for chord_code, chord, word in definitions:
    print("\t/* %s */ \"%s\"," % (chord, word))
print("};")

print()

print("static const int32_t chords[] PROGMEM = {")
for i, (chord_code, _, _) in enumerate(definitions):
    if i % 10 == 0:
       print("\t", end='')
    print("%d," % chord_code, end='')
    if i != len(definitions) - 1 and (i + 1) % 10 == 0:
       print()
print("\n};\n")

print(
"""
char const * /** Nullable */chord_lookup(int32_t chord) {
  int lower = 0, upper = STENO_WORD_COUNT - 1;
  while (lower <= upper) {
      int middle = lower + (upper - lower) / 2;
      int32_t diff = chords[middle] - chord;
      if (diff < 0) {
         lower = middle + 1;
      } else if (diff > 0) {
         upper = middle - 1;
      } else {
         return steno_words[middle];
      }
  }
  return NULL;
}
""")
