#include <stdio.h>

void swap(int *a, int *b);
void wrong_swap(int a, int b);

int main()
{
    int x=3, y=4;
    printf("The value of a and b is %d and %d\n",x,y);
    wrong_swap(x,y); // call by value pass value as argument by copy from x,y so doesn't change permanently
    printf("The value of a and b is %d and %d\n", x, y);
    swap(&x,&y);  // call by referance pass address as argument permanently change address of variable value
    printf("The value of a and b is %d and %d\n", x, y);

    return 0;
}
void swap(int *a, int *b){ // pointer point address
    int temp;
    temp = *a; // value of address of pointer a
    *a = *b; // value of address of pointer b assigned to address of pointer a permanently
    *b = temp;
    printf("%d and %d\n ", *a, *b);
}
void wrong_swap(int a, int b){ // value copied from main function 
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("%d and %d\n ", a, b);

}


