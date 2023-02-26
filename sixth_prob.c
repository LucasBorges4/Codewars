#include <stddef.h>
#include <stdio.h>

int square_sum(const int *values, size_t count){
  int num = 0;
  for(int i = 0; i < count; i++){
    num += (values[i]*values[i]);
  }
  return num;
}


int main(void){
    int array[] = {3, 0, 1};
    printf("%d", square_sum(array, 3));
    return 0;
}