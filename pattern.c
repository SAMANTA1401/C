#include <stdio.h>

void printPattern(int a);

int main()
{
    printPattern(3);
    return 0;
}

// void printPattern(int a)
// {
//     for (int i = 1; i < a+1; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
        
        
//     }
// }

void printPattern(int a){

    if (a==1)
    {
        printf("*\n");
        return;
    }
    printPattern(a-1);
    for (int  i = 0; i < (2*a-1); i++)
    {
        printf("*");
    }
    printf("\n");
    

}