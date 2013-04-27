#ifndef LIB265_BITS_PARSE_H
#define LIB265_BITS_PARSE_H

#include <stdio.h>
#include "h265define.h"

uint32 get_bits(uint8* inbuf, uint32* total_bit_offset, uint32 req_bits);
uint32 show_bits(uint8* inbuf, uint32* total_bit_offset, uint32 req_bits);

#endif