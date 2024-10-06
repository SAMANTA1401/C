// #include <stdio.h>

// int main()
// {
//     int physics, chemistry, math;
//     float total;
//     printf("Enter Physics marks :");
//     scanf("%d", &physics);

//     printf("Enter Chemistry marks");
//     scanf("%d", &chemistry);

//     printf("Enter math marks :");
//     scanf("%d", &math);

//     if (physics >= 30 && chemistry >= 30 && math >= 30 )
//     {
//         printf("You clear the test \n Total marks : %d ", physics + chemistry + math);
//     }else{
//         printf("You failed!");
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    float tax = 0, income;
    printf("Enter your income :");
    scanf(" %f", &income);
    if (income >= 50000 && income <= 100000)
    {
        tax = tax + 0.05 * (income - 50000);
    }
    printf("Your tax is : %f", tax);

    return 0;
}