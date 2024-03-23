#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include <string.h>

char *correct(char *string);

int main(void){
    char str[] = "H3ll0 W0rld!"; // Exemplo de string com caracteres que precisam ser corrigidos
    char *corrigida = correct(str); // Chamando a função para corrigir a string
    printf("String corrigida: %s\n", corrigida); // Imprime a string corrigida
    return 0;
}

char *correct(char *string){
    int length = strlen(string);
    
    for (size_t i = 0; i < length; i++){
        switch (string[i]) {
            case '5':
                string[i] = 'S';
                break;
            case '0':
                string[i] = 'O';
                break;
            case '1':
                string[i] = 'I';
                break;
            default:
                break;
        }
    }
    
    return string; // Retorna um ponteiro para a string corrigida
}
