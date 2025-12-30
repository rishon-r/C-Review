#include <stdio.h>

int main(){

  /*
  BASIC TYPES IN C:

  1. int- An integer E.g 0, 1, 2, 3, etc.
  2. float- A floating point integer E.g 1.0, 3.14, 24,333
  3. char- A character E.g 'w', 'r'
  4. char * - An array of characters (more on this later, works kind of like a string)
  */

  // CODE EXAMPLE:

  // In C, variable types have to be declared before they are assigned values
  int max_recursive_calls= 100;
  char io_mode= 'w';
  float throttle_speed= 0.2;

  printf('Max recursive calls: %d\n', max_recursive_calls);
  printf('IO Mode: %c\n', io_mode);
  printf('Throttle speed: %f\n', throttle_speed);
  // The %d, %f, %c are all called FORMAT SPECIFIERS, we will cover them in more detail later


  return 0;
}