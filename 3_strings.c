#include <stdio.h>

int main(){

  // Most of languages nowadays have built-in string types, C doesn't
  // In C, instead, strings are treated as arrays of characters
  // The specifics and internals of these will be discussed once arrays and pointers have been covered
  // For now, we will merely discuss their utility

  // char* in C roughly means String and we must use double quotes to define those objects
  // char in C uses single quotes

  char *my_first_string= "This is my first string in C";

  return 0;

}