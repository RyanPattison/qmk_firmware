#pragma once

#include "quantum.h"
#include <stdint.h>

enum STENO_KEYS {
   STENO_START = EZ_SAFE_RANGE,
   ST_LS = STENO_START,
   ST_LT,
   ST_LK,
   ST_LP,
   ST_LW,
   ST_LH,
   ST_LR,
   ST_LA,
   ST_LO,
   ST_STR,
   ST_RE,
   ST_RU,
   ST_RF,
   ST_RR,
   ST_RP,
   ST_RB,
   ST_RL,
   ST_RG,
   ST_RT,
   ST_RS,
   ST_RD,
   ST_RZ,
   ST_NUM,
   STENO_END,
};

bool process_steno_chord(uint16_t keycode, keyrecord_t *record);
