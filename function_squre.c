/*Program to calculate the square of a given integer*/
#include<stdio.h>
#include<math.h>

int main(){
    int square(int no);
    int n,sq;
    printf("Enter the integer number: ");
    scanf("%d",&n);
    sq = square(n);
    printf("\nSquare of the number is:%d",sq);

};

int square(int no){
    int result;
    result=no*no;
    return result;
};