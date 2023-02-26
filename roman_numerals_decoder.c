#include <stdio.h>
#include <string.h>

typedef struct{
    char symbol; 
    int value;
} romano;

int main(void){
    romano num_romanos[7];
    num_romanos[0].symbol = 'M', num_romanos[0].value = 1000;
    num_romanos[1].symbol = 'D', num_romanos[1].value = 500;
    num_romanos[2].symbol = 'C', num_romanos[2].value = 100;
    num_romanos[3].symbol = 'L', num_romanos[3].value = 50;
    num_romanos[4].symbol = 'X', num_romanos[4].value = 10;
    num_romanos[5].symbol = 'V', num_romanos[5].value = 5;
    num_romanos[6].symbol = 'I', num_romanos[6].value = 1;

    char num[10];
    scanf("%s", num);
    int TAM = strlen(num);
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < 7; j++) {         
            if (num[i] == num_romanos[j].symbol){
                
                
            }
        }
    }










    return 0;
}