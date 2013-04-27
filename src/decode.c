#include <stdio.h>
#include <malloc.h>
#include "../include/h265define.h"


void decode(FILE* fp)
{
  uint32 total_bit_offset = 0;
  uint8* bs_nalu = (uint8*)calloc(MAX_NALU_LEN, sizeof(uint8));  


  // main loop 
  while( !feof(fp) )
  {
    read_byte_stream_nal(fp, &total_bit_offset, bs_nalu);
     

  }


  free(bs_nalu);
}