#include <stdio.h>

int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int size, int element)
{
    int low, mid, high;

    low = 0;
    high = size - 1;
    // start searching

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    // searching ends
    return -1;
}

int main()
{
    // sorted array for binary search
    int arr[] = {1, 4, 6, 8, 23, 45, 67, 90, 123};
    int size = sizeof(arr) / sizeof(int);
    int element = 90;
    int searchIndex = binarySearch(arr, size, element);
    printf("The element %d was found at index %d \n", element, searchIndex);

    return 0;
}