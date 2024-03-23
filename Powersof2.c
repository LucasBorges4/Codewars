#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <inttypes.h>
#include <stddef.h>


void powers_of_two(size_t n, uint64_t powers[n + 1]) {
    for (size_t i = 0; i <= n; i++) {
        powers[i] = 1ULL << i; // Calcula o i-ésimo poder de dois usando o operador de deslocamento à esquerda
    }
}

int main(void) {
    size_t n = 10; // Defina o valor de n, o número de poderes de dois que você deseja calcular
    uint64_t powers[n + 1]; // Array para armazenar os poderes de dois

    powers_of_two(n, powers); // Chama a função para preencher o array com os poderes de dois
    
    return 0;
}
