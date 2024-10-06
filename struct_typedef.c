#include<stdio.h>
#include<string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[20];
}emp;

void show(emp emp1)
{
    printf("The code of employee is:%d\n ", emp1.code);
    printf("The Salary of employee is %f\n: ", emp1.salary);
    printf("The Name of employee is: %s\n ", emp1.name);
}

int main(){

    // declareing e1 and ptr
    // struct employee e1;
    emp e1;
    // struct employee *ptr;
    emp *ptr;

    //pointer ptr to e1;
    ptr = &e1;

    // set the member values for e1;
    ptr->code =101;
    ptr->salary=354.234;
    strcpy(ptr->name, "Shubha");

    show(e1);

    
    return 0;
}