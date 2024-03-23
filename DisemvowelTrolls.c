#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *disemvowel(const char *str);

int main(void) {
    char str[] = "Esta é uma frase de exemplo.";
    char *nova_str = disemvowel(str);
    printf("String sem vogais: %s\n", nova_str);

    // Não se esqueça de liberar a memória alocada
    free(nova_str);

    return 0;
}

char *disemvowel(const char *str) {
    size_t TAM = strlen(str);
    char *nova_str = malloc(sizeof(char) * (TAM + 1)); // +1 para o caractere nulo
    
    if (nova_str == NULL) {
        printf("Erro de alocação de memória\n");
        return NULL; // Indica erro
    }

    int j = 0;
    for (size_t i = 0; i < TAM; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            nova_str[j] = str[i];
            j++; // Incrementa o índice da nova string para armazenar o próximo caractere da string original sem vogal
        }
    }
    nova_str[j] = '\0'; // Termina a nova string

    return nova_str; // Retorna a nova string sem vogais
}

/*

char *disemvowel(const char *str)
{
  int len = strlen(str);
  char* out = malloc(len * sizeof(char) + 1);
  int k = 0;
  for (int i = 0; i < len; i++){
    if(!isvowel(str[i])){
      out[k] = str[i];
      k++;
    }
  }
  out[k] = '\0';
  return out;
}

char *disemvowel(const char *str)
{
  char* p = calloc(strlen(str), 4);
  int n=0;
  for(int i = 0; i < strlen(str); i++)
  {
    switch (tolower(str[i]))
    {
        case 'a': break;
        case 'e': break;
        case 'i': break;
        case 'o': break;
        case 'u': break;
        default: p[n++] = str[i];
    }
  }
	return p;
}

char *disemvowel(const char *str)
{
  int stringLen = strlen(str);
  char* final = malloc(sizeof(char) * (stringLen + 1));
  int finalIndex = 0;
  
  for(int i = 0; i < stringLen; i++)
  {
    char c = str[i];
    if(strchr("aeiouAEIOU", c) != NULL)
    {
      continue;
    }
    
    final[finalIndex] = str[i];
    finalIndex++;
  }
  final[finalIndex] = '\0';
  
  return final;
}

char *disemvowel(const char *str)
{
  static char lut[256] = {0};
  static char isInit = 0;
  if (!isInit)
  { 
    lut ['a'] = 1;
    lut ['e'] = 1;
    lut ['i'] = 1;
    lut ['o'] = 1;
    lut ['u'] = 1;
    lut ['A'] = 1;
    lut ['E'] = 1;
    lut ['I'] = 1;
    lut ['O'] = 1;
    lut ['U'] = 1;
    isInit = 1;
  }
  
  char *disvoweled = (char*) malloc(strlen(str)+1);
  if (!disvoweled)
  {
    return NULL;
  }
  
  size_t i;
  for (i = 0; *str ; ++str)
  {
    if (0 == lut[*str])
    {
      disvoweled[i++] = *str;
    }
  }
  
  disvoweled[i] = 0;
  
  return disvoweled;
}
char  *disemvowel(const char *str)
{
    char *res;
    int i = 0;
    
    res = (char *)malloc(strlen(str) + 1);
    for ( ; *str ; str++)
        if (!strchr("AEIOUaeiou", *str))
            res[i++] = *str; 
    res[i] = '\0';
    return (res);
}
char *disemvowel(const char *str)
{
  char *result = malloc(sizeof(char)*strlen(str)+1);
  size_t i=0;
  for(char *p = str; *p; p++){
    switch(towlower(*p)){
      case 'a' :
      case 'e' :
      case 'i' :
      case 'o' :
      case 'u' :
                  continue; break;
      default : *(result+i) = *p; i++; break;
    }
  }
  *(result+i) = '\0';
  return result;
}

bool is_vowel(char c) {
  c |= 'A' ^ 'a';
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

char *disemvowel(const char *str) {
  const size_t len = strlen(str);
  char *const res = malloc(len + 1);
  size_t i_dst = 0;
  for (size_t i_src = 0; i_src < len; i_src++)
    if (!is_vowel(str[i_src]))
      res[i_dst++] = str[i_src];
  res[i_dst] = '\0';
  return res;
}


char *disemvowel(const char *str)
{
  char* stripped_string = malloc(strlen(str) + 1);
  char* vowels = "aeiouAEIOU";
  int str_pos = 0;
  
  for( ; *str; str++)
  {
      if(strchr(vowels, *str) == 0)
      {
        stripped_string[str_pos] = *str;
        str_pos++;
      }
  }
  stripped_string[str_pos] = 0;
  
  return stripped_string;
}
char *disemvowel(const char *s)
{
  char * ret = calloc(strlen(s) + 1, 1);
  for (char *q = ret; *s; s++) if (!strchr("aeiouAEIOU", *s)) *q++ = *s;
  return ret;
}

char *disemvowel(const char *str)
{
  char *ans = malloc(sizeof(char) * strlen(str) + 1);
  int j = 0;
  for(int i = 0; i < strlen(str); ++i){
    switch(str[i]){
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
        break;
      default:
        ans[j++] = str[i];
    }
  }
  ans[j] = '\0';
  
  return ans;
}








*/