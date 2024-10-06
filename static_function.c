#include<stdio.h>

void main(){
    int call_static();
    int i,j;
    i=j=0;
    j=call_static();
    printf("%d\n",j);
    j = call_static();
    printf("%d\n",j);
    j = call_static();
    printf("%d\n",j);
};
int call_static(){
    static int i=1;
    int j;
    j=i;
    i++;
    return j;
}