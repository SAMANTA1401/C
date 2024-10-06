#include<stdio.h>

void printTable(int *mulTable, int num, int n)
{
    for (int i = 0; i < n; i++)
    {
        mulTable[i] = num*(i+1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%dx%d =%d\n", num, i+1,mulTable[i]);
    }
    
    
}
int main(){

    int mulTable[3][10];
    printTable(mulTable[0],2,10);
    
    return 0;
}