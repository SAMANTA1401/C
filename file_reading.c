#include<stdio.h>

int main(){
    FILE *ptr;
    int num, num1;
    ptr = fopen("harry.txt", "r");

    fscanf(ptr,"%d",&num);
    fscanf(ptr, "%d", &num1);
    fclose(ptr);

    printf("the value of num is %d\n",num);
    printf("the value of num is %d\n", num1);

    return 0;
}