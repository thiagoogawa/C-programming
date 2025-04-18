// Arrays, addresses and pointers
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  char str1[] = "Hello";
  char *str2 = "Goodbye";

  printf("%d %d %s\n", &str1, str1, str1);
  printf("%d %d %s\n", &str2, str2, str2);
  //1552268258 1552268258 Hello
  //1552268248 787320836 Goodbye

  return 0;
}