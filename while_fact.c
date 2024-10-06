/* Program to calculate factorial of given number */
#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    long int fact = 1;
    printf("Enter any number to find factorial:\n"); /*read the number*/
    scanf("%d", &x);
    while (x > 0)
    {
        fact = fact * x; /* factorial calculation*/
        x = x - 1;
    }
    printf("Factorial is %d", fact);
}