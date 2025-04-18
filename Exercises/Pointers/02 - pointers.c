// Guess what would be printed
#include <stdio.h>
#include <stdlib.h>

int main() {
  int num1 = 5, num2 = 7;
  int *ptrA, *ptrB; //they dont point anywhere, just initialized

  printf("num1 = %d, num2 = %d \n", num1, num2); // 5, 7

  ptrA = &num1; //address of num1
  ptrB = &num2; //addredd of num2
  
  printf("num1 = %d, num2 = %d \n", num1, num2); // 5 , 7
  *ptrA = *ptrA + 1; //num1 = 6
  *ptrB = *ptrB + 3; //num2 = 10

  printf("num1 = %d, num2 = %d \n", num1, num2); // 6, 10
  ptrA = ptrB; // address of num2 ptrA -> num2 10
  ptrB = ptrA; // address of num1 ptrB -> num2 10

  printf("num1 = %d, num2 = %d \n", num1, num2); //6 , 10
  printf("*ptrA = %d, *ptrB = %10 \n", *ptrA, *ptrB); // 10, 10

  num1 = *ptrB; // 10
  num2 = num1 - 3; //7

  printf("num1 = %d, num2 = %d \n", num1, num2); // 10, 7
  return 0;
}