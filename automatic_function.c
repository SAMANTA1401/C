#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,b;
    double d;
    printf("%d",argc);
    a = 10;
    b=5;
    d = (b*b)-(a/2);
    printf("%d %d %f",a,b,d);  /*All the variables a, b, d, argc and argv [ ] have automatic storage class.*/
}
