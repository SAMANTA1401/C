#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};



int main(){
    struct employee facebook[100];

    facebook[0].code = 100;
    facebook[0].salary = 1434356;
    strcpy(facebook[0].name, "shubha");


    facebook[1].code = 110;
    facebook[1].salary = 1434356;
    strcpy(facebook[1].name, "samanta");

    printf("Done");

    return 0;
}