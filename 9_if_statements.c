#include <stdio.h>

int main(){

  // C like most languages has if-statements for control flow
  // They follow the same logic as Python except the syntax is different
  // The condition has to be in parentheses and we use else if istead of elif
  // Also we use curly braces to define the statement body instead of a colon and indentation

  // Example: To print the greater number of two numbers (if they are equal return first argument)
  int result= greater(5,7);

  printf("the greater number is: %d\n", result);


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