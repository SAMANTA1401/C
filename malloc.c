#include<stdio.h>
#include<stdlib.h>

    int
    main()
{
    int *ptr;
    int *ptr1;

    // printf("The size of int on my pc is %d\n", sizeof(int));
    // printf("The size of int on my pc is %d\n", sizeof(float));
    // printf("The size of int on my pc is %d\n", sizeof(char));

    ptr = (int *)malloc(6 *sizeof(int));
    for (int i = 0; i < 600; i++)
    {
        ptr1 = (int *)malloc(60000000 * sizeof(int));
        printf("The value of %d element is: \n",i);
        scanf("%d",&ptr[i]);
        free(ptr1);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is: %d\n", i,ptr[i]);
    
    }

    return 0;
}