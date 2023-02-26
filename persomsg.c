#include <stdio.h>
#include <string.h>

const char* greet(const char *name, const char *owner) {
  if (!strcmp(name, owner)){
    return "Hello boss";
  }
  return "Hello guest";
}

int main(void){
    printf("%s", greet("paul", "paul"));
    return 0;
}

/*
const char* greet(const char *name, const char *owner) {
    // compares the two strings against each other 
    // if they are different, than we are speaking to a guest  
    return strcmp(name, owner)? "Hello guest" : "Hello boss";
}
*/