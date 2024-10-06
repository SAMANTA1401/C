#include<stdio.h>

int main(){
    int marks[4]; // allocate space for 4 integer
    int a[] ={34,56,67,78};

    // printf("Enter the value of marks for the student 1 : ");
    // scanf("%d", &marks[0]);
    // printf("Enter the value of marks for the student 2 : ");
    // scanf("%d", &marks[1]);
    // printf("Enter the value of marks for the student 3 : ");
    // scanf("%d", &marks[2]);
    // printf("Enter the value of marks for the student 4 : ");
    // scanf("%d", &marks[3]);

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of marks for the student %d : ",i+1);
        scanf("%d", &marks[i]);
    }
    

    for (int i = 0; i < 4; i++)
    {
        printf("you have entred %d marks\n",marks[i]);
    }
    
    return 0;
} 