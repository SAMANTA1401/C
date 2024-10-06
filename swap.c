/*Program to swap two values*/ 
#include <stdio.h> 
main() 
{ 
int x = 2, y = 3; 
void swap(int, int); 
printf ("\n Values before swapping are %d %d", x, y); 
swap (x, y); 
printf ("\n Values after swapping are %d %d", x, y); 
} 
/* Function to swap(interchange) two values */ 
void swap( int a, int b ) 
{ 
    int t; 
    t = a; 
    a = b; 
    b = t; 
} 