#include <stdio.h>
#include <stdlib.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))

int contar_hamming_ate(int valor_limite) {
    // Inicializar os valores e variáveis
    int count = 0;
    unsigned long proximo_hamming = 1;
    unsigned long proximo_2 = 2, proximo_3 = 3, proximo_5 = 5;

    // Loop até que o próximo número de Hamming seja menor ou igual ao valor limite
    while (proximo_hamming <= valor_limite) {
        // Contar o número de Hamming
        count++;

        // Encontrar o próximo número de Hamming
        proximo_hamming = MIN(proximo_2, MIN(proximo_3, proximo_5));

        // Atualizar os próximos múltiplos de 2, 3 e 5
        if (proximo_hamming == proximo_2) proximo_2 = 2 * proximo_hamming;
        if (proximo_hamming == proximo_3) proximo_3 = 3 * proximo_hamming;
        if (proximo_hamming == proximo_5) proximo_5 = 5 * proximo_hamming;
    }

    return count;
}

int main() {
    int valor_limite = 15;
    int quantidade_hamming = contar_hamming_ate(valor_limite);
    printf("Quantidade de números de Hamming até %d: %d\n", valor_limite, quantidade_hamming);
    return 0;
}
