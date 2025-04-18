// Multiple indirection with strings
#include <stdio.h>
#include <stdlib.h>

#define LENGTH 3
char *words[LENGTH];

int main(int argc, char **argv) {
  char *pc; //a pointer to a character
  char **ppc; // a pointer to a pointer to a character

  printf("multiple indirection example\n");

  //initialize our string array
  words[0] = "zero";
  words[1] = "one";
  words[2] = "two";

  for(int i = 0; i < LENGTH; i++) {
    printf("%s\n", words[i]);
  }

  printf("\nNow print the chars in each string...\n");
  ppc = words;
  for(int i = 0; i < LENGTH; i++) {
    ppc = words + i;
    pc = *ppc;
    while (*pc != 0) {
      printf("%c", *pc);
      pc += 1;
    }
    printf("\n");
  }

  return 0;

// multiple indirection example
// zero
// one
// two

// Now print the chars in each string...
// zero
// one
// two
}