#include <stdio.h>
#include <string.h>

int main(){

  // So far in C, we have defined strings as follows:
  char *text="Hello World";
  // But we have not understood what the char * syntax means
  // The string above is essentially a pointer to the first character in an array of single characters
  // In C strings are basically arrays of single characters and are used to represent text
  // They are any number of single characters followed by a null terminator '\0'

  // STRING MANIPULATION IN C
  // In C most string manipulation is done using pointer arithmetic and we use the null terminator '\0' to determine end of string
  // Length of the string is determined similar to the length of an array, C strings don't store their length
  // In C a string is stored as an array of characters and the null terminator is automatically added at the end
  // Functions like strlen calculate the string length by walking through the string until a null terminator is encountered
  // While this lack of length storage makes dealing with strings relatively straightforward, it can lead to errors sch as buffer overflows and off by one errors during string operations

  // We can declare string in C either with the pointer style or the array style
  // Both the lines of code below are valid (Pointer style is however preferred unless we want to preallocate multiple characters to a string)
  char *text1="Lorem ipsum";
  char text2[]= "Lorem ipsum";

  // Use the below example to visualise string memory
  // notice we aren't using all 50 characters
  char first[50] = "Snek";
  char *second = "lang!";
  strcat(first, second);
  printf("Hello, %s\n", first);
  // Output: Hello, Sneklang!

  // While the first string will have many spaces after \0 in the array of 50 fields,
  // The strcat function appends the string "lang!" to the end of the string "Snek", 
  // but smartly uses the null terminator to know where to start appending.
  // It doesn't know the length of the string, but it knows where it ends
  // Also when using strcat, you need to ensure that the first string has enough space to be able to concatenate the second string
  // Otherwise you might run into some buffer overflow errors or things like that

  // C STRING LIBRARY
  // C standard library provides us with somme functions we can use to deal with strings so that we don't always have to deal with string pointer arithmetic
  // We can use these functions by including the <string.h> header file

  // Some common string functions
  // 1. strcpy - Copies one string into an other
  char src[] = "Hello";
  char dest[6];
  strcpy(dest, src);
  // dest now contains "Hello"

  // 2. strncpy - Copies n number of characters from one string to another
  char src1[] = "Hello";
  char dest1[6];
  strncpy(dest1, src1, 3);
  // dest now contains "Hel"
  dest1[3] = '\0';
  // ensure null termination

  // 3. strcat: Concatenates one string to another
  char dest2[12] = "Hello";
  char src2[] = " World";
  strcat(dest2, src2);
  // dest now contains "Hello World"

  // 4. strncat: Concatenates a specified number of characters from one string to another
  char dest3[12] = "Hello";
  char src3[] = " World";
  strncat(dest3, src3, 3);
  // dest now contains "Hello Wo"

  // 5. strlen- Returns the length of a string
  char str[] = "Hello";
  size_t len = strlen(str);
  // len is 5 

  // 6. strcmp: Compares two strings lexicographically. Returns negative if the second string is greater than the second, positive otherwise
  char str1[] = "Hello";
  char str2[] = "World";
  int result = strcmp(str1, str2);
  // result is negative since "Hello" < "World"

  // 7. strchr: Finds the first occurrence of a character in a string
  char str3[] = "Hello";
  char *pos = strchr(str3, 'l');
  // pos points to the first 'l' in "Hello"

  // 8. strstr- Points to the first occurence of a substring in a string
  char str4[] = "Hello World";
  char *pos1 = strstr(str4, "World");
  // pos points to "World" in "Hello World"

  return 0;
}