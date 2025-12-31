#include <stdio.h>

int main(){

  // C like most languages has if-statements for control flow
  // They follow the same logic as Python except the syntax is different
  // The condition has to be in parentheses and we use else if istead of elif
  // Also we use curly braces to define the statement body instead of a colon and indentation

  // Example: To print the greater number of two numbers (if they are equal return first argument)
  int result= greater(5,7); // View if statement structure in the body of this function

  printf("the greater number is: %d\n", result);

  // Another style of if statement that is better not used is the one with the Janky syntax
  // Syntax: if (condition) single statement
  // Used when the if body has only one statement, then, we can write the if body statement without braces.
  // Example:

  if (result == 67) printf("Haha\n");

  // TERNARY OPERATOR
  // Like Java, C also has a Ternary operator
  // This helps us write if statements in one line
  // The normal syntax is a > b ? a : b
  // What this means: a > b is the condition 
  // a is the final value if the condition is true
  // b is the final value if the condition is false

  // It is good to know how to use the ternary operator but usually it's better to just stick to if statements


  return 0;


}

int greater(int x, int y){
  int greater;
  if (x > y){
    greater=x;
  }
  else if (y > x){
    greater=y;
  }
  else {
    greater=x;
  }

  return greater;

}