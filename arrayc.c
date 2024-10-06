#include<stdio.h>
#define SIZE 5   /*SIZE is a symbolic*/

int main(){
    int i =0;
    int stud_marks[SIZE]; /*array declaration*/

    for ( i = 0; i < SIZE; i++)
    {
        printf("Element no.=%d",i+1);
        printf("Enter the value of the element: ");
        scanf("%d",&stud_marks[i]);


    }
    printf("\nFollowing are the values stored in the corresponding array element: \n");
    for ( i = 0; i < SIZE; i++)
    {
        printf("Value stored in a [%d] is %d\n",i,stud_marks[i]);
    }
    
    

}

