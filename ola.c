#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
  for(int i=0; i<argc; i++)
    printf("%s\n", argv[i]);
  printf("Good morning Nightcity\n");
  
  return EXIT_SUCCESS;
} 

