#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  char str1[] = "Hello World";
  printf("%s %c %d %d %d\n", str1, str1[0], &str1, &str1[0], str1);

  //Hello World H -1013704868 -1013704868 -1013704868
  return 0;
}