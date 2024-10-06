#include<stdio.h>

int sum(int a, int b);

int main(){
    int a = 4 , b =8;
    printf("The value of a and b is %d and %d\n",a, b);
    printf("The value of 4+8 is %d\n",sum(a,b));
    printf("The value of a and b is %d and %d", a, b); // as sum function copied the value of a and b so the value
    //  so the value of a and b doesnt be changed 

    return 0;
}

int sum(int a, int b){
    int c;
    c = a+b;  // a and b are copied from main function 
    a =7;
    b=8;
    return c;
}