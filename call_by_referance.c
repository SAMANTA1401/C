#include <stdio.h>

void swap(int *a, int *b);
void wrong_swap(int a, int b);

int main()
{
    int x=3, y=4;
    printf("The value of a and b is %d and %d\n",x,y);
    wrong_swap(x,y); // call by value
    printf("The value of a and b is %d and %d\n", x, y);
    swap(&x,&y);  // call by referance
    printf("The value of a and b is %d and %d\n", x, y);

    return 0;
}
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("%d and %d\n ", *a, *b);
}
void wrong_swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("%d and %d\n ", a, b);

}


