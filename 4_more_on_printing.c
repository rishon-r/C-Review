#include <stdio.h>

int main(){

  // In languages like Python, we can easily embed the values of variables in print statements using f strings
  // In C, we have to use format specifiers to embed such values
  // These format specifiers also indicate the typed of the value to be embedded

  // Common format specifiers are:
  // %d - used for digit (integer) values
  // %f - used for floating point values
  // %c - used for character values
  // %s - used for string (char *) values

  // Example:

  char *name= "Michael";
  int age=33;

  printf("Hello, %s, your age is: %d\n", name, age);


  return 0;
}