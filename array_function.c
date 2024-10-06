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
    printArray(arr,8);
    printf("%d",arr[7]);
    
    return 0;
}