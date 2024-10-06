#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i, j;
    // scanf("%d", &n);
    n = 5;

    for (i = 1; i <= ((n + 1) / 2); i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = ((n +1)/2)-1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");

        
    }
    return 0;
}
