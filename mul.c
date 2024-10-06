#include <stdio.h>

int main()
{
    int x, y, z;
    int mul(int a, int b);
    printf("Enter two numbers: \n");
    scanf("%d %d", &x, &y);
    z = mul(x, y); /* function call by value */
    printf("\n The product of the two numbers is: % d", z);
};
/* Function to multiply two numbers */
int mul(int a, int b)
{
    int c;
    c = a * b;
    return (c);
};
