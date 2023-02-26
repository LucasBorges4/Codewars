#include <stdio.h>

int find_smallest_int(const int array[/* len */], int len)
{   
    int min = array[0];
    for (int i = 1; i < len; i++) {   
        if (array[i] < min){
            min = array[i];
        }
    }

    return min;
}



int main(void){
    int array[] = {4, 15, 9, -1};
    printf("%d\n", find_smallest_int(array, 4));

    return 0;
}