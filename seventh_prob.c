#include "stdio.h"

unsigned rental_car_cost(unsigned d)
{
    return (d*40);
}

int main(void){
    printf("%uu", rental_car_cost(4));
    return 0;
}