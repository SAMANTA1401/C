#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

void show(struct employee emp){
    printf("The code of employee is:%d\n ", emp.code);
    printf("The Salary of employee is %f\n: ", emp.salary);
    printf("The Name of employee is: %s\n ", emp.name);
}


int main(){
    struct employee e1;
    struct employee *ptr;
    
    ptr = &e1;
    // (*ptr).code =101;
    ptr->code = 101; //same as previous line
    ptr->salary=345.345;
    strcpy(ptr->name,"shubha");

    // printf("%d",e1.code);

    show(e1);
    // printf("The code of employee is: %d\n",e1.code);


    

    return 0;
}