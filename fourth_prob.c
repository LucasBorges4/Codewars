#include "stdio.h"
#include "stdlib.h"
#include <string.h>

int basic_op(char op, int value1, int value2) {
    int resultado;
    switch (op) {

    case '+':
        resultado = value1 + value2;
        break;
    case '-':
        resultado = value1 - value2;
        break;
    case '*':
        resultado = value1 * value2;
        break;
    case '/':
        resultado = value1 / value2;
        break;
    }
    return resultado;
}

/*

int basic_op(char op, int value1, int value2) {
  switch(op){
    case 43: return value1 + value2;  //43 = ASCII for "+"
    case 45: return value1 - value2;  //45 = ASCII for "-"
    case 42: return value1 * value2;  //42 = ASCII for "*"
    case 47: return value1 / value2;  //47 = ASCII for "/"
  }
  return 0;
}
#################################################################
int basic_op(char op, int x, int y) {
  
  return op == 43 ? x + y : op == 45 ? x - y : op == 42 ? x * y : x / y;
  
}
###################################################################
int minus( int a, int b ) 
{
	return a - b;
}

int multiply( int a, int b ) 
{
	return a * b;
}

int divide( int a, int b ) 
{
	return a / b;
}

const int(* const operations[CHAR_MAX])(int, int) = 
{ 
  [ '+' ] = plus, 
  [ '-' ] = minus, 
  [ '*' ] = multiply, 
  [ '/' ] = divide 
};

int basic_op( char op, int value1, int value2 ) 
{
	return operations[ op ]( value1, value2 );
}
######################################################################################################
int basic_op(char op, int value1, int value2) {
  return (op == '+') ? value1 + value2 : ((op == '-') ? value1 - value2 : ((op == '*') ? value1 * value2 : value1 / value2));
}

int makeNegative(int num)
{
  return num < 0 ? num : -num;
}
*/

int main(void){
    char operation[] = "+";
    printf("%d\n", basic_op(*operation, 4, 7));
    return 0;
}