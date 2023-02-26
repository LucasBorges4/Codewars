#include "stdio.h"
#include "string.h"

char* str_rev(char* string){
    int TAM = strlen(string);
    for (int i = 0; i < TAM/2;  i++){
        char temp = string[i];
        string[i] = string[TAM-i-1];
        string[TAM-i-1] = temp;
    }
    return string;
}

int main(void){
    char string[5] = "kayak";
    printf("%s\n", str_rev(string));
    return 0;
}