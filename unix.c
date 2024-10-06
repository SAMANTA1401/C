// U 
// UN 
// UNI 
// UNIX 
// UNIX 
// UNI 
// U 
/* Program to display the string in the above shown format*/ 

#include<stdio.h>

void main(){
    int x,y;
    static char string[]="UNIX";
    printf("\n");
    for ( x = 0; x < 4; x++)
    {
        y=x+1;
        /* reserves 4 character of space on to the monitor and minus sign is for left 
        justified*/
        printf("%-4.*s\n",y,string);
        // printf("%s\n","dd");

    }
    for ( x = 2; x >= 0; x--)
    {
        y=x+1;
        /* reserves 4 character of space on to the monitor and minus sign is for left 
        justified*/
        printf("%-4.*s\n",y,string);
        // printf("%s\n","dd");

    }
    // printf("%s\n", "abc");
    // printf("%s","dd");

    // printf("%8s\n", "abc");
    // printf("%-8s", "abc");
    // printf("%s\n","dd");
    // printf("%-*s", 8, "abc");
    // printf("%s\n","dd");

    // printf("%-*.10s", 8, "1234567890123"); //take 8 space print 10 trail 0 blank space
    // printf("%s\n","dd");

    // printf("%-*.*s", 15, 10, "1234567890123");  //take 15 space print 10 trail 5 blank space
    // printf("%s\n","dd");
    // printf("%-*s", 15, "1234567890123");  //take 15 space print all(13) trail 2 blank space
    // printf("%s\n","dd");
    // printf("%*s", 15, "1234567890123"); //take 15 space print all(13) head 2 blank space



    
}