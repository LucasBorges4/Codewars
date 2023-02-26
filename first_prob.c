#include <stdbool.h>

const char *bool_to_word(bool value){
    return value ? "Yes" : "No";
}


const char* bool_to_word_2(bool value){
    static const char* answers[] = {"No", "Yes"};
    return answers[value];
}

/* Exemplo Fraco.
const char *bool_to_word_3 (bool value)
{
// you can return a static/global string or a string literal
  if (value == 1) return "Yes";
  if (value == 0) return "No";
}
*/