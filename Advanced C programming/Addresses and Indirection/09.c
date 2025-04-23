// Address Arithmetic 3
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int a;
    int c;
    double b;
    long long int d;
} MYSTRUCT;

#define COUNT 4

int main(void) {
    MYSTRUCT *p, *q;
    void *v;

    printf("size of MYSTRUCT = %zu\n", sizeof(MYSTRUCT));

    p = calloc(COUNT, sizeof *p);
    if (!p) {
        perror("calloc failed");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < COUNT; i++) {
        p[i].a = i;
        p[i].b = 100000000.0 + i;
        p[i].c = i * 20;
        p[i].d = 4294966749LL + i;
    }
    q = p;
    printf("\n[0] values:\n");
    printf("a = %d\nb = %f\nc = %d\nd = %lld\n",
           q->a, q->b, q->c, q->d);
    printf("addresses:\na = %p\nb = %p\nc = %p\nd = %p\n",
           (void*)&q->a, (void*)&q->b, (void*)&q->c, (void*)&q->d);
    q = p + 3;
    printf("\n[3] values:\n");
    printf("a = %d\nb = %f\nc = %d\nd = %lld\n",
           q->a, q->b, q->c, q->d);
    printf("addresses:\na = %p\nb = %p\nc = %p\nd = %p\n",
           (void*)&q->a, (void*)&q->b, (void*)&q->c, (void*)&q->d);

    v = (void*)(p + 3);
    printf("\nStruct at index 3 (reinterpreted como int[]):\n");
    int num_ints = sizeof(MYSTRUCT) / sizeof(int);
    for (int i = 0; i < num_ints; i++) {
        printf("v[%d] = %d\n", i, ((int*)v)[i]);
    }

    free(p);
    return 0;
}

// size of MYSTRUCT = 24

// [0] values:
// a = 0
// b = 100000000.000000
// c = 0
// d = 4294966749
// addresses:
// a = 0x5d26e4d002a0
// b = 0x5d26e4d002a8
// c = 0x5d26e4d002a4
// d = 0x5d26e4d002b0

// [3] values:
// a = 3
// b = 100000003.000000
// c = 60
// d = 4294966752
// addresses:
// a = 0x5d26e4d002e8
// b = 0x5d26e4d002f0
// c = 0x5d26e4d002ec
// d = 0x5d26e4d002f8

// Struct at index 3 (reinterpreted como int[]):
// v[0] = 3
// v[1] = 60
// v[2] = 201326592
// v[3] = 1100470148
// v[4] = -544
// v[5] = 0