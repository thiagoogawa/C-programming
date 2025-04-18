// Write a program that initializes 2 variables (of Integer type):
// grade1. grade2.
// The program should print the VALUE and the ADDRESS of each of these variables.
#include <stdio.h>
#include <stdlib.h>

int main() {
  int grade1 = 10, grade2 = 0;
  printf("grade 1 value: %d, grade 1 address: %d\n", grade1, &grade1);
  printf("grade 2 value: %d, grade 2 address: %d\n", grade2, &grade2);


  return 0;
}

// grade 1 value: 10, grade 1 address: 1697192640
// grade 2 value: 0, grade 2 address: 1697192644