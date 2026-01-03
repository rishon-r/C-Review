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




  return 0;
}