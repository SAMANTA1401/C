/* Program to reverse a given string */ 
#include <stdio.h> 
#include <string.h> 
main() 
{ 
char first[80]; 
printf("Enter a string:"); 
gets(first); 
printf("\n Reverse of the given string is : %s ", strrev(first)); 
}