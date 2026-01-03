#include <stdio.h>

typedef union AgeOrName{
  int age;
  char *name;
} age_or_name;

int main(){

  // Now thhat we have defined what structs and enums are, we can learn about a new type of object, the union
  // A union is a combination of the two concepts of struct and enum

  // Unions in C can HOLD ONE OF SEVERAL TYPES
  // Look at age_or_name above
  // The type can hold either an int or a char *, but not both at the same time (this would make it a struct)
  // We provid the list of all the possibletypes it can hold so that C knows the MAXIMUM MEMORY REQUIREMENT and can account for that

  // USING UNIONS
  age_or_name me= {.age =29};
  printf("my age: %d", me.age);
  // But now what happens to the name field, given that we have stored age
  printf("my name: %d", me.name);
  // We will get nothing- or more specifically, undefined behaviour
  // A union only reserves enough space to store the largest type in the union, and then all of the other fields use the same memory
  // So when we write age to me, but try to read a char *name from it, we are trying to read a string from an integer block
  // which is why we get garbage or unexpected behaviour
  // A union represents the same meory location regarding of which value is stored in it

  // HELPER FIELDS
  // Helper fields are an additional feature unions provide that are not commonly used
  // View in boot.dev C5 L5
  // It is however a bad habit to use them



  return 0;

}