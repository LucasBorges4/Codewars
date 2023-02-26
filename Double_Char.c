#include <stdio.h>
#include <string.h>

char *double_char (const char *string, char *doubled)
{
  *doubled = '\0'; // write to doubled
  return doubled; // return it
}