#include<stdio.h>


int main(){
    int cal_sum();
    int sum;
    sum = cal_sum();
    printf("sum of ten natual number is %d\n",sum);

};

int cal_sum(){
    int i;
    int sum = 0;
    for( i=0; i<=10; i++)
    {
        printf("%d\n",i);
        sum = sum+i;
        
    };
    return(sum);

    
};

