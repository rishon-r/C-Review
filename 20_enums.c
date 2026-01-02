#include <stdio.h>


typedef enum DaysofWeek {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
} days_of_week;

typedef struct Event {
  char *title;
  days_of_week day;
} event_t;

int main(){
  // C allows us to define enumerated types with the enum keyword
  // A new enum type can be defined as follows: view days_of_week enum defined above

  // The typedef and its alias days_of_week are optional, but like with structs, they make enum easier to use
  // In the example above, days_of_week is a new type that can have only one of the values defined in the enum
  // MONDAY-SUNDAY are represented  by values 0-6

  // enum types can be used like this: view struct Event defined above
  // An enum is not a collection type like a struct or an array. 
  // It's just a list of integers constrained to a new type, where each is given an explicit name

  // USING enums

  days_of_week today = WEDNESDAY;

  // Use in conditionals
  if (today == FRIDAY) {
      printf("It's Friday!\n");
  }

  // NON_DEFAULT VALUES
  // Sometimes you don't want to just arbitrarily enumerate the names (assuming there are n names) with default values 0-(n-1)
  // Here, with enums, you can set different names to be equal to specific numbers
  // E.g

  typedef enum {
  EXIT_SUCCESS = 0,
  EXIT_FAILURE = 1,
  EXIT_COMMAND_NOT_FOUND = 127,
  } ExitStatus;

  // You can also define the first value and let the compiler fill in the rest

  typedef enum {
  LANE_WPM = 200,
  PRIME_WPM, // 201
  TEEJ_WPM,  // 202
  } WordsPerMinute;

  // One of the most common uses for enum is in the SWITCH CASE
  // Using enums + switch cases allows us to eliminate magic numbers from the switch cases
  /* E.g

  switch (logLevel) {
    case LOG_DEBUG:
      printf("Debug logging enabled\n");
      break;
    case LOG_INFO:
      printf("Info logging enabled\n");
      break;
    case LOG_WARN:
      printf("Warning logging enabled\n");
      break;
    case LOG_ERROR:
      printf("Error logging enabled\n");
      break;
    default:
      printf("Unknown log level: %d\n", logLevel);
      break;
  }
  You'll notice that we have a break after each case. If you do not have a break (or return), 
  the next case will still execute: it "falls through" to the next case. Many devs have written bugs when using switch statements,
   because they forgot to add break
 
  */

  // Use in switch statements
  switch(today) {
      case MONDAY:
          printf("Start of work week\n");
          break;
      case FRIDAY:
          printf("End of work week\n");
          break;
      default:
          printf("Midweek\n");
  }

  // SizeOf Enum
  // sizeof() operator works with enums
  // Generally, enums have the same size as int
  // However, if the size of the enum exceeds the capacity allowed by int, C will use a larger number time such as unsigned int 
  // or long to accomodate it

  return 0;
}