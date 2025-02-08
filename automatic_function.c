#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,b;
    double d;
    printf("%d",argc);
    a = 10;
    b=5;
    d = (b*b)-(a/2);
    printf("%d %d %f",a,b,d);  /*All the variables a, b, d, argc and argv [ ] have automatic storage class.*/
}


// Created at block entry: Automatic variables are created when the block they are defined in is entered.
// Destroyed at block exit: Automatic variables are destroyed when the block they are defined in is exited.
// Automatic memory allocation: Memory for automatic variables is automatically allocated and deallocated by the compiler.
// No initialization: Automatic variables are not initialized by default and contain garbage values.
// Scope: Automatic variables have block scope, meaning they are only accessible within the block they are defined in.