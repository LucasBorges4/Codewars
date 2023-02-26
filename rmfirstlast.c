#include "stdio.h"
#include "string.h"
#include <stdlib.h>

char* remove_char(char *dst, const char* src){
    int TAM = strlen(src);
    for (int i = 1; i < TAM; i++) {
        dst[i-1] = src[i];
    }
    dst[TAM - 2] = '\0';
    return dst;
}
/*char* remove_char(char* dst, const char* src)
{
    strcpy(dst, src + 1);
    dst[strlen(dst) - 1] = '\0';
    return dst;
}*/

int main(void){
    char *str = "eloquent";
    char newstr;
    printf("%s\n", remove_char(&newstr, str));


    return 0;
}