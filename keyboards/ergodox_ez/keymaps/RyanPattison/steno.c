#include "steno.h"

#include "quantum.h"
#include "progmem.h"

#include <stdint.h>
#include "chord_lookup.h"
#include "chord_lookup.c"

static int32_t chord = 0;
static const char steno_order[] = "STKPWHRAO*EUFRPBLGTSDZ#";

char *describe_chord(int32_t chord) {
  static char steno[24];
  int out = 0;
  for (int i = 0; i < (STENO_END - STENO_START); ++i) {
     if (chord & (1 << i)) {
       steno[out++] = steno_order[i];     
     } else if (steno_order[i] == '*') {
        steno[out++] = '-';
     }
  }
  steno[out++] = 0;
  return steno;
}

bool process_steno_chord(uint16_t keycode, keyrecord_t *record) {
   switch (keycode) {
     case STENO_START ... STENO_END: {
           int32_t steno_code = 1 << (keycode - STENO_START);
           if (record->event.pressed) {
             chord |= steno_code;
           } else if (chord & steno_code) {
             char const * word = chord_lookup(chord);
             if (word == NULL) {
               word = describe_chord(chord);
             }
             send_string_P(word);
             chord = 0;
           }
           return false;
      }
   }
   return true;
}

