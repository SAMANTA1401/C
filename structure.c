#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};


int main(){
    int a = 34;
    char b = 'g';
    float d = 234.343;
    //employee e1;
    //e1.salary = 34,454; --> wont not work without employee structure

    struct employee e1;
    e1.code = 100;
    e1.salary = 34.345;
    // e1.name = "shubha";// wouldnt work
    strcpy(e1.name, "shubha");

    printf("%d\n",e1.code);
    printf("%f\n", e1.salary);
    printf("%s", e1.name);

    return 0;
}