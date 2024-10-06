/* Program that converts input string to lower case characters */

#include <stdio.h> 
#include <string.h> 
main() 
{ 
char first[80]; 
printf("Enter a string: "); 
gets(first); 
printf("Lower case of the string is %s", strlwr(first)); 
}