#include <stdio.h>
int main()
{
  float operand1, operand2, result;
  char runtime;
  char add = '+';
  char sub = '-';
  char multiply = '*';
  char division = '/';
  char modulus = '%';
  
  printf("\nInput first number:");
  scanf("%f", &operand1);
  printf("\nInput second number:");
  scanf("%f", &operand2);
  printf("\nInput the operation:");
  scanf(" %c", &runtime);

  if (runtime == '+') {
    result = operand1 + operand2;
  }
  
  if (runtime == '-') {
    result = operand1 - operand2;
  }
  
  if (runtime == '*') {
    result = operand1 * operand2;
  }
  
  if (runtime == '/') {
    result = operand1 / operand2;
  }
  
  if (runtime == '%') {
    result = (float)((int)operand1 % (int)operand2);
  }

  printf("\nIf operand1 is = %.1f, operand2 = %.1f\n", operand1, operand2);
  printf("\nIf operation to be performed is = '%c'\n", runtime);
  printf("\nResult:%.1f\n\n", result);
}
