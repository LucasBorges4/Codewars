#include <stdio.h>
#include <stdlib.h>

struct No {
    int dados;
    struct No *prox;
};

struct No *cabeca = NULL;

void insira_no_começo(int x) {
    struct No *novo_No = (struct No*) malloc(sizeof(struct No));
    novo_No->dados = x;
    novo_No->prox = cabeca;
    cabeca = novo_No;
}

void insira_no_final(int x) {
    struct No *novo_No = (struct No*) malloc(sizeof(struct No));
    novo_No->dados = x;
    novo_No->prox = NULL;
    if (cabeca == NULL) {
        cabeca = novo_No;
        return;
    }
    struct No *ptr = cabeca;
    while (ptr->prox != NULL) {
        ptr = ptr->prox;
    }
    ptr->prox = novo_No;
}

void print_lista() {
    struct No *ptr = cabeca;
    while (ptr != NULL) {
        printf("%d ", ptr->dados);
        ptr = ptr->prox;
    }
    printf("\n");
}

int main() {
    insira_no_começo(4);
    insira_no_final(5);
    print_lista();
    return 0;
}