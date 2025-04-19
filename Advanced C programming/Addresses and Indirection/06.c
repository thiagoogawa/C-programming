// Generic Pointers
#include <stdio.h>

#define LENGTH 3
int data[LENGTH];
char *words[LENGTH];

int main(int argc, char **argv) {
  void *gp; //a generic pointer

  printf("generic pointer example\n");

  for(int i = 0; i < LENGTH; i++) {
    data[i] = i;
  }
  for(int i = 0; i < LENGTH; i++) {
    printf("%d\n", data[i]);
  }

  //initialize our string array
  words[0] = "zero";
  words[1] = "one";
  words[2] = "two";
  for (int i = 0; i < LENGTH; i++) {
    printf("%s\n", words[i]);
  }

  gp = data;
  printf("\ndata array address is %p\n", gp);
  printf("item pointed to by gp is %d\n", *(int*)gp);

  gp = (int*)gp + 1;
  printf("item pointed to by gp is now %d\n", *(int*)gp);

  gp = data;
  printf("\ndata array address is %p\n", gp);
  printf("item pointed to by gp is %s\n", *(char**)gp);

  gp = (char**)gp + 1;
  printf("item pointed to by gp is now %s\n");

  return 0;

//   generic pointer example
// 0
// 1
// 2
// zero
// one
// two

// data array address is 0x556ae2391030
// item pointed to by gp is 0
// item pointed to by gp is now 1

// data array address is 0x556ae2391030
// item pointed to by gp is zero
// item pointed to by gp is now one
}