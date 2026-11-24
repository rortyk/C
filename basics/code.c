#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  if (strcmp(argv[0], "./bin/hello") == 0)
    printf("こんにちは！\n");
  else 
    printf("私の名前は %s です\n", argv[0]);
  return 0;
}