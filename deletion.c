#include <stdio.h>

void display(int *arr, int n)
{
    // traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void indDeletion(int *arr, int size, int index)
{
    // code for deletion
    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int arr[100] = {1, 2, 3, 6, 56};
    int size = 5, element = 6, index = 4;
    display(arr, size);
    indDeletion(arr, size, index);

    size = size - 1;
    display(arr, size);

    return 0;
}