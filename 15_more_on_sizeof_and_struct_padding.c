#include <stdio.h>

typedef struct Point {
    int x;
    int y;
    int z;
} point;

int main(){
  // Besides using sizeof() operator to view the size of standard types like int and float, we can also use it to view the size
  // of objects of carious struct types

  point a={
    .x= 1,
    .y=2,
    .z=3
  };

  printf("Size of point: %zu", sizeof(point));

  // Structs are stored contigiously in memory, one field after another
  // In Mixed type structs, fields are padded so that all fields occupy the same word length in memory
  // This just helps make sure they are aligned, which the CPU internally acesses better

  // There are a bunch of complicated rules and heuristics that different compilers use to determine how to lay out your structs. But to oversimplify:
  // The fields of a struct are laid out in memory contiguously (next to each other)
  // Structs can vary in size depending on how they are laid out.
  // C is a language that aims to give tight control over memory, so the fact that you can control the layout of your structs is a feature, not a bug.
  // As a rule of thumb, ordering your fields from largest to smallest will help the compiler minimize padding
}