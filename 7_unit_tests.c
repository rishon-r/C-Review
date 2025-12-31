#include <stdio.h>

int main(){

  // Here, we use the munit testing framework to unit test

  // .c files and .h files
  // .c files contain the implementation (C code)
  // .h files contain the function prototypes of the .h files
  // A function prototype in C is a declaration that tells the compiler: 
  // “This function exists, it has this name, takes these parameters, and returns this type.”
  // It does not include the function body
  // #include the header files at the top of the .c file. This step isn't required but it is a good practice

  // Use munit by typing: #include "munit.h" at the top of the file
  // Also #include the header file of the code file you want to test
  // After this you can use munit syntax to run assertion based testing similar to the unittest framework in Python
  // Refr C1 L14 Unit testing basics to look at munit test case syntax. 
  return 0;
}