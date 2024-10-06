#include<stdio.h>

int main(){
    int a,b,c;
    int age;
    int vipPass=0;

    a=56;
    printf("%d\n",a);
    double d;
    d =0.33;
    printf("enter your age: ");
    scanf("%d",&age);
    if ((age <= 70 && age >= 18) || (vipPass==1))
    {
        printf("%d is even\n",a);

    } //else if (/* condition */)
    {
        /* code */
    }
    
    

    return 0;
}