// Address Arithmetic
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define COUNT 4

int main() {
  int *p;
  int a[COUNT];
  printf("size of an 'int' is %d\n", sizeof(int));
  for(int i = 0; i < COUNT; i++) a[i] = 1;

  p = a;
  printf("address of a is %p; value of p is %p [%d]; value pointed to by p is %d\n", a,p,p,*p);

  p = p+1;
  printf("address of a is %p; value of p is %p [%d]; value pointed to by p is %d\n", a,p,p,*p);

  p = p+2;
  printf("address of a is %p; value of p is %p [%d]; value pointed to by p is %d\n", a,p,p,*p);

  p = p+1;
  printf("address of a is %p; value of p is %p [%d]; value pointed to by p is %d\n", a,p,p,*p);

  return 0;
}

// size of an 'int' is 4
// address of a is 0x7ffdc6d44fd0; value of p is 0x7ffdc6d44fd0 [-959164464]; value pointed to by p is 1
// address of a is 0x7ffdc6d44fd0; value of p is 0x7ffdc6d44fd4 [-959164460]; value pointed to by p is 1
// address of a is 0x7ffdc6d44fd0; value of p is 0x7ffdc6d44fdc [-959164452]; value pointed to by p is 1
// address of a is 0x7ffdc6d44fd0; value of p is 0x7ffdc6d44fe0 [-959164448]; value pointed to by p is 0
