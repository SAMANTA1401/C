/*Program to demonstrate passing a structure to a function.*/

/*Declare and define a structure to hold the data.*/

#include<stdio.h>

struct data
{
    float amt;
    char fname[30];
    char lname[30];

} per;

int main(){
    void print_per(struct data x);
    printf("Enter the first name and last name: ");
    scanf("%s%s",per.fname,per.lname);
    printf("Enter Amount: ");
    scanf("%f",&per.amt);
    print_per(per);
    return 0;
}

void print_per(struct data x){
    printf("\n %s %s gave donation of amount rs.%.2f.\n", x.fname,x.lname,x.amt);
    }

    

    

