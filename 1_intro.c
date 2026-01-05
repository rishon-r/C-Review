#include <stdio.h>

int main(){
  // This is a single line comment in C
  // C is not an interpreted language like Python, where the code is read by the interpreter, line-by-line, and then executed

  // The main() function acts as an entry point to a program in C
  // This is different from Python, which automatically starts at the top of the file
  // int is its return type
  // The main function returns the EXIT CODE of the program
  // An exit code 0 means that the program has run successfully while an exit code of anything else means failure

  // Opening brackets { indicates the start of a function's body
  // C IGNORES ALL WHITESPACE so indentation is just for style, doesn't have syntactical meaning
  // Closing brackey } indicates the end of a functions body

  // #include tells the C Preprocessor to pull the contents of another file and insert it into the code right there
  // <stdio.h> is the standard input/output header file. It is the .h extension that gives it away
  // It gives us a lot of I/O functionality including the printf statement

  // Program statements in C terminate with the semi-colon

  // C is also a COMPILED LANGUAGE
  // A key distinction in programming languages lies in whether they are INTERPRETED or COMPILED
  // INTERPRETED languages are inteded to have an INTERPRETER that executes code written in those languages LINE-BY-LINE
  // However, this is not really true anymore technically as it really slows things down but it is philosophically accurate
  // A COMPILED language uses a COMPILER to exeute its programs
  // A compiler basically looks at your entire program file, instead of reading it line by line, then
  // it performs some TYPE based CHECKS and then converts your program into some kind of EXECUTABLE file (.exe) which can be run directly
  // In general, Compiled languages are faster than interpreted languages, however, there are exceptions
  // Another nice thing about compiled languages is that they will let you know that there is an error (if there is one) at compile time
  // before you execute the program
  // The C compiler helps identify if your code references variables that don't exist, functions that don't exist and fields that don't exist
  // Another advantage of compiled languages is that they allow you to ship an executable file and run it on another computer without
  // having to bring the language with you
  // There are two key CONS of a COMPILED language:
  // 1. The compilation process can often take time (a few miutes to hours) and thius time is often unproductive
  // 2. Compiled languages are often harder to debug and test iteratively than interpreted languages as we can't run it
  // even if there are errors or warning in parts of code you don't want  to test but still exist in the same file


  // Printing in C is done with the printf() function
  // To use the printf() function, we need to include the <stdio.h> library
  // Think of it as an import for now but we will delve into it with more detail later
  /* MULTI LINE COMMENT EXAMPLE
  the printf() function also does not automatically pad the string weith a newline character like the print() function in Python
  So, we need to add it explicitly
  */ 
  printf("Hello World\n");

  return 0;
}