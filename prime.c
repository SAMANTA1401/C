#include <stdio.h>

int main()
{
    int n = 4, prime;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d is a not prime number", n);
            prime = 1;

            break;
        }
    }
    if (prime != 1)
    {
        printf("%d is  a prime number ", n);
    }

    return 0;
}