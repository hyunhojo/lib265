#include "../include/bits_parse.h"
#include "../include/h265define.h"


uint32 get_bits(uint8* inbuf, uint32* total_bit_offset, uint32 req_bits)
{
  uint32 byte_offset = ((*total_bit_offset)>>3);
  uint32 bit_offset = (*total_bit_offset) & 7;
  uint32 data = 0;
  uint32 req_data;

  // 4bytes read 
  data = (inbuf[byte_offset] << 24) + (inbuf[byte_offset+1]<<16) 
        +(inbuf[byte_offset+2]<<8)  + (inbuf[byte_offset+3]);

  if (req_bits == 0)
  {
    return 0;
  }
  else
  {
    *total_bit_offset += req_bits;
    req_data = data << bit_offset;
    return ((req_data) >> (32-req_bits));
  }
}


uint32 show_bits(uint8* inbuf, uint32* total_bit_offset, uint32 req_bits)
{
  uint32 byte_offset = ((*total_bit_offset)>>3);
  uint32 bit_offset = (*total_bit_offset) & 7;
  uint32 data = 0;
  uint32 req_data;

  // 4bytes read 
  data = (inbuf[byte_offset] << 24) + (inbuf[byte_offset+1]<<16) 
        +(inbuf[byte_offset+2]<<8)  + (inbuf[byte_offset+3]);

  if (req_bits == 0)
  {
    return 0;
  }
  else
  {
    req_data = data << bit_offset;
    return ((req_data) >> (32-req_bits));
  }
}

