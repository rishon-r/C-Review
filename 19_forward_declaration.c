#include <stdio.h>

// STRUCT FORWARD DECLARATION
typedef struct Node node_t;

// STRUCT COMPLETE DECLARATION
typedef struct Node {
  int value;
  node_t *next;
} node_t;

int main(){

  // Assume you had a struct that needed to reference itself, or be used recursively
  // A good example of this is a struct for Node
  // Look at struct defined above
  // The problem is that the type node is not defined yet, which will cause the compiler to report an issue
  // A forward declaration lets the compiler know about the existence of a struct type before it's fully defined
  // Note that the forward declaration must match the eventual definition in Name and typedef alias
  // Forward declarations can also be used when two structs reference each other (a circular reference)
  // You will forward declare both structs in advance before going into their detailed declarations
  return 0;
}