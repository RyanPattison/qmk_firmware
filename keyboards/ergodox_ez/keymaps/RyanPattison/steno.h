#pragma once

#include "quantum.h"

#include <stdint.h>
#include <stdbool.h>
 
enum STENO_KEYS {
   STENO_START = SAFE_RANGE+10,
   MY_STENO_LS = STENO_START,
   MY_STENO_LT,
   MY_STENO_LK,
   MY_STENO_LP,
   MY_STENO_LW,
   MY_STENO_LH,
   MY_STENO_LR,
   MY_STENO_LA,
   MY_STENO_LO,
   MY_STENO_STR,
   MY_STENO_RE,
   MY_STENO_RU,
   MY_STENO_RF,
   MY_STENO_RR,
   MY_STENO_RP,
   MY_STENO_RB,
   MY_STENO_RL,
   MY_STENO_RG,
   MY_STENO_RT,
   MY_STENO_RS,
   MY_STENO_RD,
   MY_STENO_RZ,
   MY_STENO_NUM,
   STENO_END,
};

bool process_steno_chord(uint16_t keycode, bool is_pressed);
