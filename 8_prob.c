#include <stdlib.h>
#include <stdio.h>

size_t count_words (const char *words)
{
// count the number of words
// this function will be used to allocate the right amount of memory so it has to be correct !
	return 0;
}

void words_to_array (const char *words, char *words_array[])
{
// allocate the words on the heap, they will be freed
// write them to the pre-allocated words_array
	words_array[0] = calloc(1, 1);
}


char** cut_string(char* str){
    return &str;
}

int main(void){
    char* str = "string for while";
    printf("%s\n", *cut_string(str));



    return 0;
}