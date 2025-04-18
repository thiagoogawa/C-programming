// Indirection and commandline args
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  int i;

  for(int i = 0; i < argc; i++) {
    printf("arg %d is %s\n", i, argv[i]); //prints arg at index i
  }

  printf("\n\n");

  for(i = 0; i< argc; i++) {
    printf("arg %d is %s\n", i, *argv); //prints arg pointed to by argv
    argv += 1;
  }

  // arg 0 is CommandLineArgs
  // arg 1 is one
  // arg 2 is two
  // arg 3 is three

  return 0;
}