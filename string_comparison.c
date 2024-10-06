/* The following program uses the strcmp function to compare two strings. */ 

#include<stdio.h>
#include<string.h>

void main(){
    char first[80],second[80];
    int value;
    printf("Enter a string: ");
    gets(first);
    printf("Enter second string: ");
    gets(second);
    value=strcmp(first,second);
    if(value==0){
        puts("The two strins are equal");
    }else if (value<0)
    {
        puts("The first string is smaller.");
    }else if (value>0)
    {
        puts("The first string is bigger.");
    }
    
    

}