#include <stdio.h>

struct student
{
    int roll_no;
    char name[20];
    char course[20];
    int marks_obtained;
};

int main()
{
    struct student stud[20];
    int i;
    printf("Enter the student data one by one\n");
    for (i = 0; i <= 19; i++)
    {
        printf("Enter the roll number of %d student", i + 1);
        scanf("%d", &stud[i].roll_no);
        printf("Enter the name of %d student", i + 1);

        scanf("%s", stud[i].name);
        printf("Enter the course of % d student", i + 1);
        scanf("%d", stud[i].course);
        printf("Enter the marks obtained of % d student", i + 1);
        scanf("%d", &stud[i].marks_obtained);
    }
    printf("the data entered is as follows\n");
    for (i = 0; i <= 19; i++)
    {
        printf("The roll number of % d student is % d\n", i + 1, stud[i].roll_no);
        printf("The name of % d student is % s\n", i + 1, stud[i].name);
        printf("The course of % d student is % s\n", i + 1, stud[i].course);
        printf("The marks of % d student is % d\n", i + 1, stud[i].marks_obtained);
    }
}
