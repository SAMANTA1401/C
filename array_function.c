#include<stdio.h>

void printArray(int *ptr, int n){
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d \n ", i+1, *(ptr+i));
    }
    ptr[7] = 555;

}

// void printArray(int ptr[], int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value of element %d is %d\n",i+1,ptr[i]);
//     }
//     ptr[7] = 555;
    
// }
int main(){
    int arr[] = {2,3,4,67,23,4,34,5};
    printf("%u \n", arr); // array pointer always points to the beginning of the array i.e. address of the first element
    printf("%u \n", &arr); // print address of the first element
    printf("%u \n", &arr + 1); // print address of the second element
    printf("%d \n", arr[0]); // print first element
    printf("%u \n", &arr[0]); // print address of the first element
    printf("%u \n", &arr[7]); // print address of the last element
    printf("%d \n", arr[7]); // print  last element

    int *ptr = arr; // store first element address to ptr pointer
    int *ptr2;
    ptr2 = &arr[7]; // store last element address to ptr2 pointer

    printf("%u \n", ptr);        // print address store in ptr
    printf("%u \n", ptr2);       // print address store in ptr2
    printf("%d \n", *ptr);       // print value of address store in  ptr
    printf("%d \n", *(ptr + 1)); // print value of address store in next of ptr
    printf("%d \n", arr[1]);     // print value


    printArray(arr,8);
    printf("%d",arr[7]);
    
    return 0;
}