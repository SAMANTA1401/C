#include<stdio.h>

int main(){
    int arr[5] = {10,20,30,40,50};
    int i;
    for (i=0; i<5; i++){
        printf("i=%d\t  arr[%d]=%d\t  *(arr+%d)=%d\t",i,i,arr[i],i,*(arr+i));    
        printf("&arr[%d]=%u\t arr+%d=%u\n", i,&arr[i],i,(arr+i));                                                                               
    }
}