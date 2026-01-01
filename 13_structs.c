#include <stdio.h>

struct Point {
    int x;
    int y;
    int z;
};


int main(){

  // STRUCTS in C mirror objects in other languages but have a few key differences
  // C is not an object oriented language and hence does not provide the programmer with the ability to create and use objects
  // Structs are different from objects in the way that they don't allow high level object behaviours like Inheritance, Polymorphism and Encapsulation
  // Structs also don't allow class methods
  // Instead, structs are simply a way of grouping multiple fields or data points together so that they can be treated as a single coherent entity together
  // Simply put, STRUCTS SERVE AS A WAY TO LOGICALLY CLUSTER VARIABLES TOGETHER
  // This is useful as instead of passing multiple related variables to a function separately, you can simply pass a single struct
  // Also when we want to return a collection of values from afunction, we can make the function have a return type struct
  // We can access fields in a struct using the . operator or if we have a pointer to a struct, we can acccess them using the arrow -> operator
  
  // The ORDER in which we define variables in a struct matters in C, in terms of SIZE OF MEMORY and the LAYOUT OF MEMORY
  // What happens in internally:
  // In C, when we define a struct, what we are implying, is that we have a few PIECES OF DATA, 
  // that we want to store right NEXT to each other in MEMORY
  // And that we want to treat the memory pertaining to these pieces of DATA as sort of a BLOCK
  // And the SIZE OF THIS BLOCK is dependent upon the ORDER in which we DEFINE these pieces of data WITHIN THE STRUCT

  // A simple example of how to use structs lies in the representation of a set of points in a 3D system
  // Using three separate integer variables x,y and z to represent a point is logically flawed as you treat the points individually and not
  // as a cohesive entity
  // NOTE: Structs are usually not defined in the function body but globally, so that they can be accessed by all functions

  // Below, we can create instances of the struct Point that we have defined above
  // This is how we initialize a struct
  struct Point a={10, 11, 3};

  // Another way to create objects of struct type is using DESIGNED INITIALIZERS
  // This style is usually preferred for two reasons:
  // (i) The field names are given
  // (ii) In case the fields change, you don't have to worry about ordering
  // E.g

  struct Point b={
    .x=3,
    .z=4,
    .y=6
  };

  // Variables in a struct can be of different types

  printf("Point a: (%d, %d, %d)", a.x, a.y, a.z);

  // Values of variables in a struct can also be modified
  a.x=4;
  a.y++;

  


  return 0;
}