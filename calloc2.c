#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;
    printf("How many integer you want to enter\n");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int)); // dynamic contiguous memory allocation for array of n elements

    for (int i = 0; i < n; i++)
    {
        printf("The value of %d element is: \n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value of %d element is: %d\n", i, ptr[i]);
    }

    return 0;
}