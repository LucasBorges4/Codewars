#include "stdio.h"
#include "stdlib.h"


char hello(int indice){
    char hello[14] = "\"hello world!\"";
    return hello[indice];
}

void greet(void){
    for (int i = 0; i < 14; i++) {
        printf("%c", hello(i));
    }
    printf("\n");
}
int main(void){
    greet();
    return 0;
}