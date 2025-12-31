#include <stdio.h>
#include <stddef.h>

int main(){

  // In C, the size of a type is not guaranteed to be the same on every system
  // This is because the size of a particular type like int, depends upon the system architecture 
  // In a 32 bit system, an int is usually 4 bytes whereas on a 64 bit system it is 8 bytes
  // We determine the zie of a type after applying sizeof() on the type in the compiler we intend to use

  // However, some types usually have the same sizes
  // Some common ones are:
  // 1. char -used to represent a single character, size: 1 byte
  // 2. float- used to represent a single precision floating point number, size: 4 bytes
  // 3. double- used to represent a double precision floating point number, size: 8 bytes

  // SIZEOF operator
  // The sizeof() operator is used to determine the size of a particular variable or type
  // It can be used like a function although it is technically a unary operator 
  // Example:

  // Use %zu as format specifier for printing the sizeof result
  printf("The size of char is: %zu\n", sizeof(char));

  // size_t is a SPECIAL TYPE in C
  // It is an unsigned integer type, guaranteed to be large enough to be able to represent the size of any object in bytes
  // This is the type sizeof() returns


  return 0;
}