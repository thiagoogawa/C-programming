#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num;
  int *numPtr;
  int x;
  num = 100;
  numPtr = &num; //address of num
  x = *numPtr; //pointer variable whose value is the address of num

  // indirection: using a pointer to acess the data at the address to which the pointers refers.
}