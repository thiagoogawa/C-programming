// Address Arithmetic 2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define COUNT 4

int a[COUNT];
float b[COUNT];
double c[COUNT];
long long int d[COUNT];
short int e[COUNT];
long int f[COUNT];

int main() {
  int *pa;
  float *pb;
  double *pc;
  long long int *pd;
  short int *pe;
  long int *pf;

  printf("sizes are: int %d; float %d; double %d; long long int %d; short int %d; short int %d; long int %d\n", sizeof(int),
  sizeof(float), sizeof(double), sizeof(long long int), sizeof(short int), sizeof(long int));

  pa = a;
  pb = b;
  pc = c;
  pd = d;
  pe = e;
  pf = f;

  for(int i = 0; i < COUNT; i++) {
    a[i] = i;
    b[i] = (float)i;
    c[i] = (double)i;
    d[i] = i;
    e[i] = i;
    f[i] = i;
  }

  pa += 1;
  pb += 1;
  pc += 1;
  pd += 1;
  pe += 1;
  pf += 1;

  printf("address of a is %p [%d]; value of pa is %p [%d]; value pointed to by pa is %d\n",a,a,pa,pa,*pa);
  printf("address of b is %p [%d]; value of pb is %p [%d]; value pointed to by pb is %f\n",b,b,pb,pb,*pb);
  printf("address of c is %p [%d]; value of pc is %p [%d]; value pointed to by pc is %f\n",c,c,pc,pc,*pc);
  printf("address of d is %p [%d]; value of pd is %p [%d]; value pointed to by pd is %lld\n", d,d,pd,pd,*pd);
  printf("address of e is %p [%d]; value of pd is %p [%d]; value pointed to by pe is %hd\n", e,e,pe,pe,*pe);
  printf("address of f is %p [%d]; value of pd is %p [%d]; value pointed to by pf is %ld\n", f,f,pf,pf,*pf);

  return 0;
}

// sizes are: int 4; float 4; double 8; long long int 8; short int 2; short int 8; long int -2021343282
// address of a is 0x5caf972db040 [-1758613440]; value of pa is 0x5caf972db044 [-1758613436]; value pointed to by pa is 1
// address of b is 0x5caf972db050 [-1758613424]; value of pb is 0x5caf972db054 [-1758613420]; value pointed to by pb is 1.000000
// address of c is 0x5caf972db060 [-1758613408]; value of pc is 0x5caf972db068 [-1758613400]; value pointed to by pc is 1.000000
// address of d is 0x5caf972db080 [-1758613376]; value of pd is 0x5caf972db088 [-1758613368]; value pointed to by pd is 1
// address of e is 0x5caf972db0a0 [-1758613344]; value of pd is 0x5caf972db0a2 [-1758613342]; value pointed to by pe is 1
// address of f is 0x5caf972db0c0 [-1758613312]; value of pd is 0x5caf972db0c8 [-1758613304]; value pointed to by pf is 1
