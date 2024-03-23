#include <stdio.h>
#include <stdlib.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))

unsigned long hamming(int limit) {
    unsigned long *h = (unsigned long *)malloc(sizeof(unsigned long) * limit);
    int i, j, k;
    unsigned long x2, x3, x5;

    // Inicializar o vetor h com 1
    for (int idx = 0; idx < limit; idx++) {
        h[idx] = 1;
    }

    x2 = 2;
    x3 = 3;
    x5 = 5;
    i = j = k = 0;

    for (int n = 1; n < limit; n++) {
        h[n] = MIN(x2, MIN(x3, x5));

        if (x2 == h[n]) {
            i++;
            x2 = 2 * h[i];
        }
        if (x3 == h[n]) {
            j++;
            x3 = 3 * h[j];
        }
        if (x5 == h[n]) {
            k++;
            x5 = 5 * h[k];
        }
    }

    unsigned long ultimo_hamming = h[limit - 1];
    free(h); // Liberar a memória alocada

    return ultimo_hamming;
}

int main() {
    int limit = 9;
    printf("%lu\n", hamming(limit));
    return 0;
}
