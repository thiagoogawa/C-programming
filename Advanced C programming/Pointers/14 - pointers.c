// pt-br;
// ponteiros duplos:
// 1) Referenciar indiretamente uma variável por dois níveis de indireção;
// 2) Modificar o valor de um ponteiro dentro de uma função;
// 3) Criar estruturas de dados como matrizes 2D alocadas dinamicamente;
// 4) Trabalhar com argumentos char **argv no main.


// declaração e sintaxe:
// int   x  = 42;   // variável normal 
// int  *p  = &x;   // ponteiro para int // *p é o valor de X = 42
// int **pp = &p;   // ponteiro para ponteiro de int /**pp é o valor de p = endereço de x = 42
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int   x  = 10;
    int  *p  = &x;    // p → x
    int **pp = &p;    // pp → p → x

    printf("x    = %d\n",  x);      // 10
    printf("*p   = %d\n", *p);      // 10
    printf("**pp = %d\n\n", **pp);  // 10

    // Endereços:
    printf("endereço de x  = %p\n", (void*)&x);
    printf("conteúdo de p  = %p\n", (void*) p);
    printf("conteúdo de pp = %p\n", (void*) pp);

    return 0;
}


