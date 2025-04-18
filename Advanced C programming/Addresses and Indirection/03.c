// Multiple indirection with integers
#include <stdio.h>
#include <stdlib.h>

#define LENGTH 3
int data [LENGTH];

int main(int argc, char **argv) {
  int *pi; //simple pointer to an integer
  int **ppi; //a pointer to a pointer to an integer

  printf("multiple indrection example\n");

  //initialize our integer array
  for(int i = 0; i < LENGTH; i++) {
    data[i] = i;
  }

  for(int i = 0; i < LENGTH; i++) {
    printf("%d\n", data[i]);
  }

  pi = data;
  ppi = &pi;

  for(int i =0; i < LENGTH; i++) {
    printf("\nLoop[%d] array address is %p\n", i, data);
    printf("item pointed to by pi is %d\n, *pi");
    printf("item pointed to by ppi is %p\n", *ppi);
    printf("item pointed to by double indirection of ppi is %d\n\n", **ppi);
    printf("The address of pi is %p and the value of pi (what it points to) is %p\n\n", &pi, ppi);

    pi+=1; //advance the pointer to point to the next element of the data array
  }

  // multiple indrection example
  // 0
  // 1
  // 2
  
  // Loop[0] array address is 0x619633aad030
  // item pointed to by pi is -804023728
  // , *piitem pointed to by ppi is 0x619633aad030
  // item pointed to by double indirection of ppi is 0
  
  // The address of pi is 0x7fffd0139428 and the value of pi (what it points to) is 0x7fffd0139428
  
  
  // Loop[1] array address is 0x619633aad030
  // item pointed to by pi is -804023728
  // , *piitem pointed to by ppi is 0x619633aad034
  // item pointed to by double indirection of ppi is 1
  
  // The address of pi is 0x7fffd0139428 and the value of pi (what it points to) is 0x7fffd0139428
  
  
  // Loop[2] array address is 0x619633aad030
  // item pointed to by pi is -804023728
  // , *piitem pointed to by ppi is 0x619633aad038
  // item pointed to by double indirection of ppi is 2
  
  // The address of pi is 0x7fffd0139428 and the value of pi (what it points to) is 0x7fffd0139428

  return 0;
}