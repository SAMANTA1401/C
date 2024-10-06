#include<stdio.h>

int fibo(int a);

int main(){
    printf("%d",fibo(5));
    return 0;
}

int fibo(int a){
    if (a==1)
    {
        return 0;
    }else if (a==2)
    {
        return 1;
    }else{
        return fibo(a-1) + fibo(a-2);
    }
    
}