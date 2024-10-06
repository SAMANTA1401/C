/*Program which returns the position of the string from where first string does
not match with second string*/
#include <stdio.h>
#include <string.h>
void main()
{
    char first[80], second[80];
    printf("Enter first string: "); 
    gets(first); 
    printf("\n Enter second string: "); 
    gets(second); 
    printf("\n After %d characters there is no match",strspn(first, second));
}