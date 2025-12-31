#include <stdio.h>

int main(){

  // There are chiefly 3 kinds of loops in C: for loop, while loop, do-while loop
  // We will learn about all of them by writing a loop that counts numbers from 1 to 100

  // The for loop is a countable loop. It loops until the counter variable reaches a particular value
  // Its header has chiefly four parts: 
  // (i) initialization: This is executed once at the start of loop
  // (ii) condition: This is checked before every iteration. If true the loop executes, otherwise the loop terminates
  // (iii) final-statement: Executed after every iteration. Usually used to increment the counter variable but can also be used for running other code
  // (iv) loop body: Code executed when the condition evaluates to true
  /*
    Syntax: 
    
    for (initialization; condition; final-statement){ 
    //do something }
  */ 

  for (int i=1; i<=100; i++){
    printf("%d\n",i);
  }

  // While loop
  // The while loop is an entry controlled loop
  // It allows statements in the loop body to execute as long as the condition remains true
  // There usually exists an update statement for variable in the loop condition in the loop body unless it is intended to be an infinite loop
  // Condition is checked every time the statements in the loop body are finished executing
  /*
    Syntax:

    while (condition){
      // do something
    }
  */

  // Example to print numbers 1-100:
  int i=1;
  while (i<=100){
    printf('%d\n', i);
  }

  /* 
    Infinite loop syntax:

    while(1;){
      //do something
    }
  
  */

  // do-while loop
  // do while loop is an exit controlled loop
  // It executes the statement in body, then checks condition, if the condition is true, executes next statement
  // Here, the only difference is you always execute the loop body at least once
  // whereas the while loop will execute zero times if the condition is fals

  /*
    Syntax:

    do{
      // something
    } while (condition;)
  */



  return 0;

}