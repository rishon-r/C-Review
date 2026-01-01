#include <stdio.h>

// FUNCTION PROTOTYPES
void increment(int a);
void actually_increment(int *a);

// SAMPLE STRUCT FOR EXAMPLES
typedef struct Point {
    int x;
    int y;
    int z;
} point;

int main(){

  // ON MEMORY
  // Before we understand what pointers are, it is crucial that we understand how memory works
  // VARIABLES are human readable names that reference some data in the memory
  // Memory can be thought of as an array of bytes which stores data
  // Variables are human readable names which refer to an address in memory
  // A memory address is an index into the big array of bytes
  // Note that this is still a trivialised explanation of memory but is sufficient enough on undersstanding so that
  // we can move forward with learning about pointers
  // In reality, often, computers are far more complicated

  // In C, you can print the address of a variable using the address-of-operator: &
  // e.g
  int age= 37;
  printf("The address of age is %p", &age);
  // Note above that a %p format specifier allows formatting of a pointer

  // Another important thing to note is that memory adresses are just numbers, usually of the hexadecimal kind
  // Hexadecimal formatting makes large integers or binary digits humanly readable (1 hex digit represents 4 bits)

  // In our programs also, we don't get acess to the Physical RAM in our computer directly
  // Instead we get access to something known as VIRTUAL MEMORY
  // Virtual memory makes it seem like your program has direct acess to all memory in the computer, even if it doesn't
  // We refer to the actual memory in the RAM of our computer as PHYSICAL MEMORY
  // Access to the Physical memory is managed by the operating system
  // Think of the VIRTUAL MEMORY as an ABSTRACTED CHUNK OF MEMORY that your program can use
  // Within this chunk of memory, you can store all your program related data
  // Like with any concept in CS, there are exceptions to this rule and sometimes, your C program will be allowed to directly access physical memory

  // What are the ADVANTAGES of VIRTUAL MEMORY?
  // By providing your program only virtual memory to work with, the operating system can do some pretty cool things:
  // 1. ISOLATION: One process can't access the memory of another process
  // 2. SECURITY: The operating system can prevent processes from accessing some parts of memory
  // 3. SIMPLICITY Developers need not worry about managing the physical memory and memory of other processes (Isolation kind of feeds into simplicity)
  // 4. PERFORMANCE; Operating system can optimize the memory access based on the hardware and the needs of the program. For example, by moving memory between physical memory and hard drive

  // So, WHAT ARE PONTERS?: Pointers are simply values that hold the address of other values
  // Follow along example below

  int x=7;
  // The variable x now refers to the value 7 which is stored at a particular memory address
  // We can get the address of x by saying &x 
  int y=x;
  // Now the variable y is created and refers to the same value as x
  // However, the value of x has been copied into a different memory address which is the memory address of y
  // x and y have different memory adressses 
  // In C, variables are named memory locations and are bound to a memory location from when they are created
  // When a variable is reassigned a value, its memory address remains the same, the value this named memory location previously held is simply rewritten with the new value
  x=12;
  // After the above change, &x will still be the same as before, only its value changes
  // The value of y will also remain unchanged as it references a different memory address
  // Now, we will encounter our first pointer in the below line:
  int *x_ptr=&x;
  // We saw before that &x operator returns a pointer
  // Now, the value of x_ptr, is the meory address of x, but the memory address of x_ptr is different
  // Simply put: x_ptr= &x but &x_ptr!=&x and is instead some new memory address
  // We are simply storing the address of another variable in a new variable and variables that store memory addresses are called pointers

  // But here comes the cool thing about pointers: THE DEREFERENCING OPERATOR
  printf("Value of x_ptr: %p", x_ptr); // This line will print the memory address stored at x_ptr's value
  printf("Value of x: %d", *x_ptr); // This will print the value at the memory address stored as the value of x_ptr, i.e. the value of x
  // The dereferencing operator, when applied to a pointer, accesses the value stored at the memory address that is the pointer's value

  int z= *x_ptr;
  // Now the variable Z is created at a different memory location and the value of the memory address stored as x_ptr's value is copied as its value

  // Now comes another cool step:
  *x_ptr= 13;
  // Now, the value of x changes to 13
  // i.e the value at the memory address stored as x_ptr's value is set to be equal to 13

  // WHY POINTERS?
  // In C, all function parameters are PASS BY VALUE
  // This means that, when variables are passed as parameters to functions, their values are copied into the function
  // i.e their memory addresses aren't passed to the function
  // What does this mean for a programmer?: This means that changes made to the values of parameters within a function only hold within that function
  // Changes made to these variables are not reflected outside the function
  // To make a change to a variable using a function, it would have to return a changed value, which we would then store in the variable in the main() function body
  // So, if instead, we pass pointes to these variables required to be parameters as parameters to the function
  // We can dereference those pointers inside the function body, to obtain the memory addresses of those variables
  // and then change the values at these memory addresses manually, so that they remain changed outside the function
  // E.g
  int a=7;
  increment(a);
  printf("New value of a: %d", a); // Value of a will still be 7

  // Now, watch below
  int *a_ptr=&a;
  actually_increment(a_ptr);
  // This will actually increment the value at a
  printf("New value of a: %d", a); // New value of a will be 8


  // POINTERS TO STRUCTS
  // When you have a struct, you can access its fields using the . operator
  // However when you use a pointer to a struct, you must access its fields using the arrow operator (->)
  // E.g 

  point p= {3,4,5};
  int p_x=  p.x; // Using . with struct

  // Pointer to struct
  point *p_ptr= &p;
  int p_ptr_x= p_ptr->x;
  // What above line p_ptr->x effectively means is (*p_ptr).x
  // The arrow operator essentially combines the dot operator along with the dereference operator
  // Note that the . operator has higher precedence over the dereference operator *, so parentheses () are essential
  // if you want to use the notation without the arrow operator to dereferece a pointer before accesing a member: (*p_ptr).x


  return 0;
}

void increment(int a){
  a+=1;
}

void actually_increment(int *a){
  *a+=1;
}