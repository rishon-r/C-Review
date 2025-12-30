#include <stdio.h>

int main() {

  // In languages like Python, you can change the value of a variable to a type different than that of the initial value it held
  // E.g x=5 followed by x="hello" is a vlid assignment in Python
  // However, in C, this is illegal
  // in C, CHANGING THE TYPE of an EXISTING VARIABLE is not allowed

  // However, VARIABLES are MUTABLE, and we can change the value of a variable
  // As long as the new value is the same type as which the variable was decalred to be.
  // E.g

  int x=5;

  x=12; // This is just updating the value and is completely permissible

  // We can use the const TYPE QUALIFIER when declaring a variable if we don't want its value to be updateable
  // E.g

  const int y=25;

  // We can't change the value of y in the following cod, even to another value of type int

  return 0;

}