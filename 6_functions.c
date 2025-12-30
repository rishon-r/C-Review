#include <stdio.h>

int main(){

  // Here, we call the function
  float result= sum(10,12);

  printf('Here is the result: %f\n', result);


  return 0;
}

float sum(int x, int y){
  // This is a function in C
  // In C functions specify the type of their return value and that of the arguments that they take
  // Here, float is the type of the return value and the arguments x and y are of type int

  // Below, (float) casts the result of x+y to type float
  // We will discuss casting and conversion between types in detail later

  return (float)(x+y);
}

void print_result(void){
  // There is also a special type for function signatures in C called void
  // THE void TYPE in a function signature basically tells us that the function returns no value
  // void in C is not like None in Python in the fact that it cannot be assigned to a variable
  // It can also be used to explicitly state that a function takes no arguments
  print("result");
}