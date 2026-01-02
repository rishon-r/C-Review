#include <stdio.h>

// SAMPLE STRUCT FOR EXAMPLES
typedef struct Point {
    int x;
    int y;
    int z;
} point;

int main(){

  // Arrays in C are similar to Lists in Python but they have a few key differences
  // Firstly, they can only store objects of the same type
  // Secondly, they are of fixed size
  // In C an array is indexed by integers from zero similar to Python
  // An array in C is a fixed size, ordered collection of elements
  // The elements are stored in contigious memory locations like structs
  // They are created with curly braces
  // E.g

  int nums[5]= {1,2,3,4,5};

  // ITERATING OVER AN ARRAY: Can be done using a for-loop

  for(int i=0; i < 5; i++){
    printf("%d\n", nums[i]);
  }

  // Elements can be accessed and updated similar to those lists in Python
  nums[2]=7;
  nums[4]=67;

  // ARRAYS AS POINTERS
  // In C, arrays and pointers are closely related.
  // An array is essentially a POINTER to the FIRST ELEMENT in that ARRAY
  // This means that array indexes and pointer arithmetic can be used interchangeably to access elements within an array
  // E.g

  int *nums_ptr= nums; // nums_ptr here becomes a pointer to the memory location of the first element in the array

  // Now we will see how to use pointer arithmetic to access values within an array

  int val_at_2= *(nums+1); 
  // this above line takes memory location of first elemnt pointed to by nums, adds 1 to get location of second element and then dereferences that location to get value of second element

  // POINTER ARITHMETIC: When you add an integer to a pointer, the resulting pointer is offset
  // by that integer times the size of data type that the pointer holds
  // This works as arrays in C only hold values of same data type


  // MULTIBYTE ARRAYS
  // If we create an array of structs, it gets insane how many things we can do
  // as we can access and manipulate elements, wither using index or pointer arithmetic

  // Let us create an array of structs

  point coordinates[3]= { {1,2,3}, {4,5,6}, {7,8,9}};

  // Now let us try accessing the y coordinate of every struct in coodinates array
  // We can do this in two ways

  // First, using indexes

  printf("Y coordinates of points 1,2,3 in array are: %d, %d, %d", coordinates[0].y, coordinates[1].y, coordinates[2].y);

  // Second, using pointer arithmetic
  printf("Y coordinates of points 1,2,3 in array are: %d, %d, %d", (coordinates)->x, (coordinates+1)->y, (coordinates)->y);
  // The second example tells us about the way that arrays are stored in Memory
  // Each index of array is allocated a few bytes based on the type of the array
  // IN this way C knows how much to jump when we use pointer arithmetic and tis is also why C only stores arrays containing values of the same type

  // ARRAY CASTING (Not recommended to do in real code, but useful for understanding how C works internally)
  // Because arrays are basically just pointers and becaus structs are contigious in memory
  // We can cast the array of structs to an array of integers
  int *start=(int *)coordinates;
  // Then we can simply iterate through this array of integers
  for(int i=0; i <9; i++){
    printf("coordinates[%d]: %d", i, start[i]);

  }

  // POINTER SIZE
  // In C, pointers represent memory addresses and hence, are always the same size
  // Arrays however, have their size determined by the number of elements they store and the size of each element
  int *intPtr;
  char *charPtr;
  double *doublePtr;
  printf("Size of int pointer: %zu bytes\n", sizeof(intPtr));
  printf("Size of char pointer: %zu bytes\n", sizeof(charPtr));
  printf("Size of double pointer: %zu bytes\n", sizeof(doublePtr));
  // Size of int pointer: 4 bytes
  // Size of char pointer: 4 bytes
  // Size of double pointer: 4 bytes

  // Although an array variable in C is a pointer to the memory location of the first element in the array
  // When we use sizeof(), with the name of array, it returns the size of the array and not the size of the pointer
  // It will do so until we downcast the name of array to a pointer
  int intArray[10];
  char charArray[10];
  double doubleArray[10];
  printf("Size of int array: %zu bytes\n", sizeof(intArray));
  printf("Size of char array: %zu bytes\n", sizeof(charArray));
  printf("Size of double array: %zu bytes\n", sizeof(doubleArray));
  // Size of int array: 40 bytes
  // Size of char array: 10 bytes
  // Size of double array: 80 bytes
  // Although an array is a pointer to the first element, it's not just a pointer: it's a block of memory that holds all the elements

  // HOW TO FIND LENGTH OF AN ARRAY: Length of an array= sizeof(array)/ sizeof(element in an array)
  // A simply way to get this: int len= sizeof(arr)/ sizeof(arr[0]);

  // ARRAYS DECAY TO POINTERS (VERY IMPORTANT)
  // We know that arrays are like pointers but also not exactly the saem
  // Arrays allocate memory for their elements whereas pointers just hold a memory address
  // In many cases: ARRAYS DECAY TO POINTERS
  // this means that they JUST BECOME POINTERS TO THE FIRST ELEMENT OF THE ARRAY

  // When do arrays decay?: When used in expressions containing pointers
  // i.e pointer arithmetic, indexes, when assigned to a pointer
  int arr[5];

  // 'arr' decays to 'int*' because that's the type of 'ptr'
  int *ptr = arr;

  // 'arr' decays to 'int*' to perform pointer arithmetic
  int value = *(arr + 2);

  // MOST IMPORTANTLY: Arrays also decay when they are passed to functions. So in a function, you are operating with
  // the pointer to first value in array
  // You can't pass arrays by value to functions like you do structs

  // When arrays don't decay: When using the sizeof() operator with name of array, when initializing
  // Also, taking the address of an array with &arr gives you a pointer to the whole array, not just the first element.
  





  return 0;


}