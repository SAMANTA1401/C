#include <stdio.h>
struct student
{
    int roll_no;
    char name[20];
    char course[20];
    int subject[3];
};
main()
{
    struct student stud[5];
    int i, j;
printf(“Enter the data for all the students:\n”);
for (i = 0; i <= 4; i++)
{
    printf(“Enter the roll number of % d student”, i + 1);
    scanf(“% d”, &stud[i].roll_no);
    printf(“Enter the name of % d student”, i + 1);
    scanf(“% s”, stud[i].name);
    printf(“Enter the course of % d student”, i + 1);
    scanf(“% s”, stud[i].course);
    for (j = 0; j <= 2; j++)
    {
        printf(“Enter the marks of the % d subject of the student % d
               :\n”, j + 1, i + 1);
        scanf(“% d”, &stud[i].subject[j]);
    }
}
printf(“The data you have entered is as follows
       :\n”);
for (i = 0; i <= 4; i++)
{
printf(“The %d th student's roll number is %d\n”,i+1,stud[i].roll_no); 
printf(“The %d the student's name is %s\n”,i+1,stud[i].name); 
printf(“The %d the student's course is %s\n”,i+1,stud[i].course); 
for(j=0;j<=2;j++) 
 {
            printf(“The % d the student's marks of %d I subject are %d\n”,i+1, j+1,  stud[i].subject[j]); 
 }
}
printf(“End of the program\n”);
}