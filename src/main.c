#include <stdio.h>

extern void decode(FILE* fp);

// HEVC Main Profile Decoder main function
int main(int argc, char* argv[])
{
  FILE* fp = fopen(argv[1], "rb");
  printf("HEVC Main Profile Decoder\n"); 
  
  decode(fp);

  fclose(fp);
  return 0;
}