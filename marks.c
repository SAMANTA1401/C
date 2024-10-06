// find maximum marks among the marks of 10 student

#include <stdio.h>
#define SIZE 10

int main()
{
    int i = 0;
    int max = 0;
    int stud_maxs[SIZE]; /* array declaration */

    /* enter the values of the elements */
    for (i = 0; i < SIZE; i++)
    {
        printf("Student no.= %d", i + 1);
        printf(" Enter the marks out of 50:");
        scanf("%d", &stud_maxs[i]);
    }

    // find maximum
    for (i = 0; i < SIZE; i++)
    {
        if (stud_maxs[i] > max)
        {
            max = stud_maxs[i];
        }
    }
    printf("\n\nThe maximum of the marks obtained among all the 10 students is: %d ",max); 
}