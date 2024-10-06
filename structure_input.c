#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};


int main(){
    struct employee e1, e2, e3;
    // e1
    printf("enter the value for code of e1 :");
    scanf("%d",&e1.code);

    printf("enter the salary  of e1 :");
    scanf("%f", &e1.salary);

    printf("enter the name of e1 :");
    scanf("%s", e1.name);
    // e2
    printf("enter the value for code of e2 :");
    scanf("%d", &e2.code);

    printf("enter the salary  of e2 :");
    scanf("%f", &e2.salary);

    printf("enter the name of e2 :");
    scanf("%s", e2.name);

    return 0;
}