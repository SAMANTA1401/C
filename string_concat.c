/* Program for string concatenation*/ 

#include<stdio.h>
#include<string.h>

void main(){
    char first[80],second[80];
    printf("Enter  a string: ");
    gets(first);
    printf("Enter another string: ");
    gets(second);
    strcat(first,second);
    printf("\nThe two strings joined together: %s\n", first);
}