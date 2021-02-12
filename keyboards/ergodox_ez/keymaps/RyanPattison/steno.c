#include "steno.h"

#include "quantum.h"

#include "chord_lookup.h"

#include <stdint.h>
#include <stddef.h>

static char *describe_chord(uint32_t chord) {
  static const char steno_order[] = "STKPWHRAO*EUFRPBLGTSDZ#";
  static char steno[24];
  int out = 0;
  for (int i = 0; steno_order[i]; ++i) {
     if (chord & (1UL << i)) {
       steno[out++] = steno_order[i];     
     } else if (steno_order[i] == '*') {
        steno[out++] = '-';
     }
  }
  steno[out++] = ' ';
  steno[out++] = 0;
  return steno;
}

bool process_steno_chord(uint16_t keycode, bool is_pressed) {
   static uint32_t chord = 0;
   if (keycode < STENO_START || keycode >= STENO_END) {
      return true;
   }
   uint32_t steno_code = 1UL << (keycode - STENO_START);
   if (is_pressed) {
     chord |= steno_code;
   } else if (chord & steno_code) {
     if (process_chord(chord)) {
       send_string(describe_chord(chord));
     }
     chord = 0;
   }
   return false;
}

