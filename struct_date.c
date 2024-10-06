#include<stdio.h>

typedef struct date
{
    int date;
    int month;
    int year;
}date;

void display(date d){
    printf("The date is : %d/%d/%d\n", d.date,d.month,d.year);
}

int dateCmp(date d, date d1){
    if (d.year>d1.year)
    {
        return 1;
    }
    if (d.year < d1.year)
    {
        return -1;
    }
    if(d.month>d1.month){
        return 1;
    }
    if (d.month < d1.month)
    {
        return -1;
    }
    if (d.date > d1.date)
    {
        return 1;
    }
    if (d.date < d1.date)
    {
        return -1;
    }

    return 0;

}

int main(){

    date d = {2,11,21};
    date d1 = {5,4,22};

    display(d);
    display(d1);

    int a = dateCmp(d, d1);
    printf("Date Comparison return: %d",a);

    return 0;
}
