#include <stdio.h>

int main(){
  // So far, we hae thought of memory as an array of bytes
  // Besides this, in C, we also think of two additional structures: the STACK and the HEAP
  // For now, let us look at the stack

  // The stack is where LOCAL VARIABLES are STORED
  // When a function is CALLED, a NEW STACK FRAME is created for that function's local variables and parameters
  // When the function returns, its stack frame is deallocated
  // This region is aptly named the stack as it is LAST IN, FIRST OUT
  // Each time a function is called, its stack frame is pushed on to the stack and everytime it returns, its stack frame is popped off the stack

  // ONCE A FUNCTION IS CALLED:
  // The STACK POINTER is MOVED, in order to make room for: 
  // (i) The return address: Where to pickup when the function returns
  // (ii) Arguments to the function
  // (iii) Local variables in the function body

  // When the FUNCTION RETURNS:
  // the stack frame is DEALLOCATED
  // by returning the STACK POINTER to where the function's STACK FRAME BEGAN

  // WHY THE STACK?
  // We prefer to allocate memory on the stack primarily because it is FASTER and EASIER to use than the HEAP
  // Using the STACK allows:
  // (i) EFFICIENT POINTER MANAGEMENT: Stack allocation is simply an increment or decrement of the stack pointer while heap allocation require more nuance
  // (ii) CACHE-FIRENDLY MEMORY ACCESS: The stack memory is stored in a contigious block, ensuring faster cache performance as a result of spatial locality
  // (iii) AUTOMATIC MEMORY MANAGEMENT: Stack memory is managed automatically by functions when they return
  // (iv) INHERENT THREAD SAFETY: Each thread has its own stack. Heap allocations require synchronization mechanisms when used concurrently, potentially introducing overhead.

  // STACK OVERFLOW
  // The stack is great and all, one of the MAJOR DRAWBACKS: IT HAS A LIMITED SIZE
  // If you keep pushing frames on to a stack without popping them off, you'll run into a stack overflow error
  // This is why doing recursion without TAIL CALL OPTIMIZATION can be dangerous
  // Each recursive call pushes a new fram onto the stack; if you have too many recursive calls, you'll run out of stack space

  // POINTERS TO THE STACK
  // Stack frames are constantly being pushed and popped on to the stack
  // It is important to remember that stack memory should only be used within the context of a function
  // i.e once a function returns, that region of the stack may be used by some other values
  // So, it is important not to return memory addresses of local variables created within the function
  // as after the function has returned, these addresses will not be referring to the entities that we want them to refer to

  // STACK vs. HEAP
  // The stack is SIMPLE (to use) and FAST but however, it is LIMITED in its functionality
  // The heap is SLOWER and more COMPLICATED to use, but allows us to create more COMPLEX and SOPHISTICATED DATA STRUCTURES

  // C always needs to know how LARGE (SIZE) a data item is and WHERE TO PUT IT (LOCATION)
  // A lot of the standard types, as we have seen before, have defined sizes and do not require DYNAMIC allocation

  // MORE ON STACK FRAMES
  // Any time a function is called, a new stack frame is created
  // The first thing pushed on to the stack frame is the return address (this tells us where to go when the function returns)
  // Then, the local variables and parameters are also pushed
  // In all this there is a Stack Pointer
  // It shows the next empty location in the stack
  // When the function returns, all data in stack frame is cleared and the stack pointer returns back to location it was before function was called

  // THE HEAP on the other hand requires a MANUAL ALLOCATION of memory whcih is controlled by the programmer
  // It follows DYNAMIC ALLOCATION of MEMORY (requests memory at runtime rather than compile time)
  // We use malloc() and free() in general which are used to ALLOCATE and DEALLOCATE memory in the heap
  // Using the heap in this way is SLOWER< MORE COMPLICATED and may lead to MEMORY LEAKS
  // A memory leak occurs when you allocate memory on the heap but never free it, causing your program to gradually consume more and more memory that it can never use again

  // So despite all this, WHY DO WE USE THE HEAP?:
  // Simply put: THE STACK is used when we know the size of data to be stored AHEAD of time and when this data can be stored within a single function
  // We use THE HEAP WHEN: we do not know the size of data ahead of time or when the returning of this data isn't limited to one function
  



  return 0;
}