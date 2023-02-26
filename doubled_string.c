#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_string_size(const char* str) {
    int count = 0;
    while (*(str + count) != '\0')
        count++;
    return count;
}

void double_char (const char *string, char **doubled){
    int TAM = count_string_size(string); //conta o tamanho da string;
    *doubled = (char*)malloc(2*TAM*sizeof(char)+1); //Aloca memória para o produto final da função;

    int i = 0;   
    while (*(string + i) != '\0'){
        (*doubled)[2*i] = string[i];
        (*doubled)[2*i+1] = string[i];
        i++;
    }  //Duplica os caracteres da string original.
}

//função correta

char *double_char2 (const char *string, char *doubled)
{
    int i;
    for (i = 0; string[i] != '\0'; i++)
    {
        doubled[2*i] = string[i];
        doubled[2*i + 1] = string[i];
    }
    doubled[2*i] = '\0'; // add null terminator to the end of the doubled string
    return doubled;
}

int main(void){
    char* str;
    str = "Hello World!";
    int TAM = strlen(str);
    char* doubledr;
    double_char2(str, doubledr);
    printf("%s\n", doubledr);
    

    return 0;
}