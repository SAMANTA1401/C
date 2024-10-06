/*Program to find factorial using recursion*/
#include <stdio.h>
void main()
{
    int n, factorial;
    int fact(int);
    printf("Enter any number: \n");
    scanf("%d", &n);
    factorial = fact(n); /*Function call */
    printf("Factorial is %d\n", factorial);
}
/* Recursive function of factorial */
int fact(int n)
{
    int res;
    if (n == 1) /* Terminating condition */
        return (1);
    else
        res = n * fact(n - 1); /* Recursive call */
    return (res);
}