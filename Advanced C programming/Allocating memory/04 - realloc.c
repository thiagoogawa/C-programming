#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *s;
  int i;

  i = sizeof("hello");
  s = (char*)malloc(i);
  strncpy(s, "hello", i);
  printf("s is %s\n", s);

  s = realloc(s, 12);
  strncpy(s, "hello", i);
  strcat(s, "world");
  printf("s is now %s\n", s);

  free(s);

  return 0;
}

//s is hello
//s is now helloworld