#include <stdbool.h>
#include <string.h>
#include <stdio.h>


bool validate_pin(const char *pin) {
    int TAM = strlen(pin);
    int digits_valid = 0;
    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < 10; j++){
            char code[10] = "0123456789";
            if (pin[i] == code[j]) {
                digits_valid++;
                break;
            }
        }
    }
    
    if (TAM == 4) {
        if (digits_valid == 4) return true;
    }
    else if (TAM == 6){
        if (digits_valid == 6) return true;
    }
    
    return false;
}

/*
bool validate_pin(const char *pin) {
  int l = strlen(pin);
  if(l != 4 && l != 6) return false;
  for(const char* p = pin; *p; p++){
    if(!isdigit(*p)) return false;
  }
  return true;
}

bool validate_pin(const char *pin) {
  int pinLen = strlen(pin);
  if(pinLen == 4 || pinLen == 6) {
    for(int i = 0; i < pinLen; i++) {
      if(pin[i] < 48 || pin[i] > 57) {
        return false;
      }
    }
    return true;
  }
 return false;
}
bool validate_pin(const char *pin) {

    // Variable to store initial regex()
    regex_t reegex;
    // Creation of regex
    int nomatch = regcomp(&reegex, "(^[0-9]{4}$)|(^[0-9]{6}$)", REG_EXTENDED);
    // Check pin against regex
    nomatch = regexec(&reegex, pin, 0, 0, 0);
    // "0" is returned on match so logic is inverted 
    if (!nomatch) 
      return true;
    return false;
    
}
bool validate_pin(const char *pin) {
  regex_t regex;
  regcomp(&regex, "^[0-9]{4}$|^[0-9]{6}$", REG_EXTENDED);
  if (!regexec(&regex, pin, 0, NULL, 0))
    return true;
  else 
    return false;
}
bool validate_pin(const char *pin) {
    return '0' <= *pin && *pin++ <= '9'
        && '0' <= *pin && *pin++ <= '9'
        && '0' <= *pin && *pin++ <= '9'
        && '0' <= *pin && *pin++ <= '9'
        && (!*pin || '0' <= *pin && *pin++ <= '9'
                  && '0' <= *pin && *pin++ <= '9'
                  && !*pin);
}

bool validate_pin(const char *pin) {
  bool containsAlpha = false;
  
  for (int i = 0; pin[i] != '\0'; i++){
    if (!isdigit(pin[i])){
      containsAlpha = true;
    }
  }
  return ((strlen(pin) == 4 || strlen(pin) == 6) && !containsAlpha);
}
*/

int main(){
    char str[6] = "0=00";
    bool result = validate_pin(str);
    printf("%d\n", result);

    return 0;
}