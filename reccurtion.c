#include <stdio.h>

float fact(int a);

int main()
{
    printf("%.2f",fact(5));
    return 0;
}

float fact(int a)
{
    printf("%d\n",a);
    if (a == 0 || a == 1)
    {
        return 1;
    }
    else
    {
        return (a * fact(a - 1));
    }
}