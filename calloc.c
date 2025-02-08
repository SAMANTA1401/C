#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;// pointer store address

    // printf("The size of int on my pc is %d\n", sizeof(int)); //4 bytes
    // printf("The size of int on my pc is %d\n", sizeof(float));//4 bytes
    // printf("The size of int on my pc is %d\n", sizeof(char));//1 bytes
    // dynamic contiguous memory allocation for array of 6 elements
    ptr = (int *)calloc(6 , sizeof(int)); // allocate memory of size int(4bytes) for 6 elements(zero) each
    // for (int i = 0; i < 6; i++)
    // {
    //     printf("The value of %d element is: \n", i);
    //     scanf("%d", &ptr[i]);
    // }

    printf("%u\n%u\n%u\n", &ptr, ptr, *ptr); // address of ptr, address of value which ptr store, value of address

    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is: %d\n", i, ptr[i]);
    }

    return 0;
}

// ptr: a pointer variable that will hold the address of the allocated memory.
// (int *): a typecast that converts the returned void pointer to an integer pointer.
// calloc: a function that allocates memory for an array of elements.
// 6: the number of elements in the array.
// sizeof(int): the size of each element in the array.
// What calloc does:
// Allocates a contiguous block of memory for the specified number of elements.
// Initializes all bits in the allocated memory to zero.
// Returns a void pointer to the beginning of the allocated memory.