#include <stdio.h>
#include <stdlib.h>

int main(){

  // THE HEAP: is used when we do not know the size of data we are creating ahead of time
  // OR when the data is expected to live longer than the function that created it 

  // THE HEAP is a long living pool of memory that is shared across the entire program
  // Not limited to a single function call like stack memory
  // The HEAP memory is manually allocated and dealocated by the programmer using malloc() and free()
  // whereas the stack memory is automatically allocated and deallocated by function call
  // Using the heap allows us to create data objects that live in a long lasting pool of memory and don't get erased automatically
  // during the chaos of multiple function calls and that can be created and destroyed by the will of the programmer.
  // THE HEAP is also MUCH LARGER than the stack in terms of storage
  
  // The heap is often referred to as DYNAMIC MEMORY as it is allocated and deallocated as needed
  // The malloc() and free() functions are a part of <stdlib.h> which has to be included at the top of the file, if we intend on using dynamic memory for our program
  
  // MALLOC()
  // The malloc() function in C is a standard library function that allocates a specific number of bytes of memory
  // on the heap and returns back a pointer to that memory
  // An important point: THE NEW MEMORY ALLOCATED IS UNINITIALIZED
  // This means that it contains whatever memory was previously at that location
  // Which means that it is the programmer's responsibility to ensure that the allocated memory is properly initialized and eventually freed using free to avoid memory leaks
  // malloc() returns NULL if the memory allocation fails
  // Example: 

  // Allocates memory for an array of 4 integers
  int *ptr = malloc(4 * sizeof(int));
  if (ptr == NULL) {
    // Handle memory allocation failure
    printf("Memory allocation failed\n");
    exit(1);
  }
  // use the memory here
  // ...
  free(ptr);

  // Using malloc() and free together is what makes this called MANUAL MEMORY MANAGEMENT
  // Saying free(ptr) as in the case above tells the system that the memory pointed to by ptr is no longer needed, making it available for reuse
  // The memory allocator marks that block of heap memory as free, so future malloc() calls can reuse it
  // Remember however that: The actual bytes in memory are left unchanged (they still contain whatever values were there)
  // They are just available to be used by another object which may choose to rewrite them
  // After free():
  // - ptr still contains the address (it's NOT set to NULL automatically)
  // - The memory still contains 42 (data isn't erased)
  // - But you must NOT use ptr anymore - it's a "dangling pointer"
  // The best practice is to set it to NULL after use

  int *ptr1 = malloc(sizeof(int));
  *ptr1 = 42;

  free(ptr1);
  ptr1 = NULL;  // Good practice! Prevents accidental reuse

  if (ptr1 != NULL) {
      *ptr1 = 100;  // This check now prevents the bug
  }

  // BIG ENDIAN AND LITTLE ENDIAN
  // This proves useful when understanding memory
  // Endianness refers to the order in which bytes are stored in memory
  // In Big endian, the most significant byte is stored first in the lower memory address
  // In little endian, the least significant byte is stored first, in the lower memory address
  // However, C mostly takes care of this and you do not have to worry too much about this

  return 0;
}