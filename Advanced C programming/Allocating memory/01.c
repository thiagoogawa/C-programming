// Allocating memory with malloc
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXSTRLEN 100

char * string_function(char *astring) {
  char * s;
  s = (char*)malloc(MAXSTRLEN);
  s[0] = 0; // need this to initialize the buffer created by malloc
  strcat(s, "Hello ");
  strcat(s, astring);
  strcat(s, "\n");
  return s;
}

int main(int argc, char **argv) {
  printf(string_function("Fred"));
  printf(string_function("Gussie Fink-Nottle"));
  return 0;

  // Hello Fred
  // Hello Gussie Fink-Nottle
}
