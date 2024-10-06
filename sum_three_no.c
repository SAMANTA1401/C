#include<stdio.h>

int main(){
    int a1,a2,a3;
    void sum(int,int,int);
    printf("Enter three number: ");
    scanf("%d %d %d",&a1,&a2,&a3);
    sum(a1,a2,a3);
}

void sum(int f1,int f2, int f3){
    int s;
    s = f1+f2+f3;
    printf("\nThe sum of the three numbers is %d\n",s);
}