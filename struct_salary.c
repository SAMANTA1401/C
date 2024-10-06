#include <stdio.h>

int main()
{
    struct sal
    {
        char name[30];
        int no_days_worked;
        int daily_wage;
    };
    struct sal salary;
    struct sal get_data(struct); /*function prototype*/
    float wages(struct);         /*function prototype*/
    float amount_payabel;        /*variable declarion*/

    salary = get_data(salary);

    printf("the name of employee is %s", salary.name);
    printf("number of days worked is %d", salary.no_days_worked);
    printf("the daily wage of the employee is %d", salary.daily_wage);
    amount_payabel = wages(salary);
    printf("The amount payble to %s is %f ", salary.name, amount_payabel);
}

struct sal get_data(struct sal income)
{
    printf("Please enter the employee name:\n")
        scanf("%s", income.name);
    printf("Pleaes enter the number of days worked:\n")
        scanf("%d", &income.no_days_worked);
    printf("The daily wage of the employees is %d", salary.daily_wage);
    amount_payable = wages(salary);
    printf("The amount payable to %s is %f", salary.name, amount_payable);
}
struct sal get_data(struct sal income)
{
    printf("Please enter the employee name:\n");
    scanf("%s", income.name);
    printf("Please enter the number of days worked:\n");
    scanf("%d", &income.no_days_worked);
    printf("Please enter the employee daily wages:\n");
    scanf("%d", &income.daily_wages);
    return (income);
}
float wages(struct)
{
    struct sal amt;
    int total_salary;
    total_salary = amt.no_days_worked * amt.daily_wages;
    return (total_salary);
}