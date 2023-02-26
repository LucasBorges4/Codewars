#include <stdbool.h>
#include <stddef.h>

size_t count_sheep(const bool *sheep, size_t count){
    size_t num = 0;
    for (int i = 0; i < count; i++) {
        num += sheep[i];
    }
    return num;
}


int main(void){
    bool sheep[] = {true, false};
    count_sheep(sheep, 2);



    return 0;
}