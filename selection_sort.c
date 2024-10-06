#include <stdio.h>
#define SIZE 5

int main()
{
    int j, min_pos, tmp;
    int i;       /* Loop variable */
    int a[SIZE]; /* array declaration */

    // Enter the element

    for (i = 0; i < SIZE; i++)
    {
        printf("Element no=%d", i + 1);
        printf("Value of the element: ");
        scanf("%d", &a[i]);
    }

    // sorting by ascending __ORDER

    for (i = 0; i < SIZE; i++)
    {
        min_pos = i;
        for (j = i + 1; j < SIZE; j++)
        {
            // if (a[j] < a[min_pos])
            // { // 5,3,7,8,2
            //     min_pos = j;
            //     tmp = a[i];
            //     a[i] = a[min_pos];
            //     a[min_pos] = tmp;
            // }
            
            if (a[j] < a[min_pos])
            { // 5,3,7,8,2
                min_pos = j;
            }
            
            tmp = a[i];
            a[i] = a[min_pos];
            a[min_pos] = tmp;
        }
    }
    /* print the result */
    printf("The array after sorting:\n");
    for (i = 0; i < SIZE; i++)
        printf("% d\n", a[i]);
}