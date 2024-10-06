/*Program to store and retrieve the values from the student structure*/
#include<stdio.h>

struct student
{
    int roll_no;
    char name[20];
    char course[20];
    int marks_obtained;
    
};
int main(){
    struct student s1;
    printf("Enter the student roll number:  ");
    scanf("%d",&s1.roll_no);
    printf("\nEnter the student name: ");
    scanf("%s",s1.name);
    printf("\nEnter the course name: ");
    scanf("%s",s1.course);
    printf("\nEnter the marks percentage: ");
    scanf("%d",&s1.marks_obtained);


    printf("show data:-");
    printf("\nThe student roll no is %d",s1.roll_no);
    printf("\nThe student name is %s",s1.name); 
    printf("\nThe student course is %s",s1.course); 
    printf("\nThe student percentage is %d",s1.marks_obtained); 

}



