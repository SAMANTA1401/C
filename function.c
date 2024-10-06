#include<stdio.h>

// sum is a function which takes a and b as input and  returns an integer as an output
int sum(int a, int b); // function prototype
void change(int a);

int main(){
    int c;
    // c = sum(6,7);
    // printf("the sum is %d",c);

    int b = 344;
    printf("The value of b before change is %d\n ",b);
    change(b);
    printf("The value of b after change is %d\n",b);
    return 0;
}

int sum(int x, int y){
    int result;
    result = x +y;

    return result;
}

void change(int b){
    b =77;

}