#include<stdio.h>

int main(){
    int n =5;
    int fact = 1;
    for (int i = 1; i < n+1; i++)
    {
        fact = fact * i;
        
    }
    printf("%d",fact);
    

    return 0;
}