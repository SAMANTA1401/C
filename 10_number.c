/* Program to print 10 even numbers */
#include <stdio.h>
main()
{
    int i = 2;
    while (1)
    {
        printf("%d ", i);
        i = i + 2;
        if (i >= 20)
            goto outside;
    }
outside:
    printf("over");
}