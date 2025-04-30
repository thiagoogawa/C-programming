#include <stdio.h>
#include <stdlib.h>

typedef struct No {
  int valor;
  struct No *prox;
} No;

int main(void) {
  No *n1 = malloc(sizeof *n1);
  if (!n1) return 1;

  n1->valor = 42;
  n1->prox = NULL;

  No *n2 = malloc(sizeof *n2);
  if (!n2) return 1;

  n2->valor = 84;
  n2->prox = NULL;

  n1->prox = n2;

  printf("Nó 1: valor = %d\n", n1->valor);
  printf("Nó 2: valor = %d\n", n2->valor);
  free(n2);
  free(n1);

  return 0;
}

// Nó 1: valor = 42
// Nó 2: valor = 84