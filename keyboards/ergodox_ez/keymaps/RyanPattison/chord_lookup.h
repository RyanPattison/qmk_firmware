#pragma once

#include <stdint.h>
#include <stdbool.h>

/**
 * Sends the corresponding string as output. Returns true if processing should continue (no match).
 */
bool process_chord(uint32_t chord);
