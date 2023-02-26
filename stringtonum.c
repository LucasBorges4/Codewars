#include <string.h>
#include <stdlib.h>
int string_to_number(const char *src) {
  int num = strtol(src, NULL, 10);
  return num;
}
/*
int string_to_number(const char *src)
{
    int i,value=0,m;

    for(i=0; i<src[i] ; i++)
    {
        if(src[i]!='-')
        {
            m=src[i]-'0';   //converts every string to digit: ex '1' ->1 '2'->2 etc
                            // let say '9' value in ASCII is 56,  '0' value is 47 
                            // 56-47 = 9
            value=10*value+m; 
        }

    }
    if(src[0]=='-')   // if has sign converts the number to negativ
        value*=-1;

    return value;
}

int string_to_number(const char *src) {
    return atoi(src);
}

int string_to_number(const char *src) {
  int i;
  int res;
  int sign;
  
  i = 0;
  res = 0;
  sign = 1;
  while((src[i] >= 0 && src[i] <= 32) || src[i] == '+')
    i++;
  if(src[i] == '-')
  {
    sign = -1;
    i++;
  }  
  while(src[i] >= '0' && src[i] <= '9')
  {
    res = (res * 10) + (src[i] - 48);
    i++;
  }
   return (res * sign);
}

int string_to_number(const char *src) {
  
  int returnValue = 0;
  
  /============================================================================
              case for if value is positive, then start at index 0
    math is as follows: ( *ascii value* - 48 ) * ( 10 ^ position in 10ths place)
  
  ==============================================================================/
  
  if( src[0] != '-' )
  {
    for(int i = 0 ; i < strlen(src) ; i++ )
      returnValue += ( src[i] - 48 ) * pow(10, strlen(src) - i - 1);
  }
  
  /============================================================================    
              else, start at index 1, must modify "i <" statement then
          Since returnValue starts at 0, just subtract from there instead
                                      of add
  ==============================================================================/
  
  else
  {
    for(int i = 1 ; i < strlen(src) ; i++ )
      returnValue -= ( src[i] - 48 ) * pow(10, strlen(src) - i - 1);
  }

  return returnValue;
}



*/
int main(void){



    return 0;
}