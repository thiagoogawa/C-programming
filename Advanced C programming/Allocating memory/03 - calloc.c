#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char *s;
  int i;
  int *p;

  // use malloc first to allocate some memory and see what is in it (usually rubbish)
  s = (char*)malloc(6);
  for(i=0;i<6;i++) {
    printf("s[%d]=%d\n", i, s[i]);
  }
  free(s);
  printf("\n");

  s=(char*)calloc(6, sizeof(char));
  for(i=0;i<6;i++) {
    printf("s[%d]=%d\n", i, s[i]);
  }
  free(s);
  printf("\n");

  p = (int*)calloc(6, sizeof(int));
  for(i=0;i<6;i++) {
    printf("p[%d]=%d\n",i,p[i]);
  }
  free(p);

  return 0;
}
// s[0]=0
// s[1]=0
// s[2]=0
// s[3]=0
// s[4]=0
// s[5]=0

// s[0]=0
// s[1]=0
// s[2]=0
// s[3]=0
// s[4]=0
// s[5]=0

// p[0]=0
// p[1]=0
// p[2]=0
// p[3]=0
// p[4]=0
// p[5]=0