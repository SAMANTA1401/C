#include<stdio.h>

int main(){
    int i = 100;
    int *pi;
    int **pii;
    pi = &i;
    pii = &pi;

    printf ("Address of i = %u \n", &i); 
    printf("Address of i = %u \n", pi); 
    printf("Address of i = %u \n", *pii); 
    printf("Address of pi = %u \n", &pi); 
    printf("Address of pi = %u \n", pii); 
    printf("Address of pii = %u \n", &pii); 
    printf("Value of i = %d \n", i); 
    printf("Value of i = %d \n", *(&i)); 
    printf("Value of i = %d \n", *pi); 
    printf("Value of i = %d", **pii);
}