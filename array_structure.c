#include<stdio.h>
#include<string.h>

struct employee // look like class employee, c doesn't support class
{
    int code;
    float salary;
    char name[10];
};

// This defines a struct called employee with three members : code : an integer to store the employee's 
// code salary : a floating - point number to store the employee's salary name : a character array to store
//  the employee's name (with a maximum length of 9 characters, since the 10th character is reserved for the
//      null terminator)

int
main(){
    struct employee facebook[100]; // This declares an array called facebook that can hold up to 100 employee structs.
    // first array element contains 3 struct fields
    facebook[0].code = 100;
    facebook[0].salary = 1434356;
    strcpy(facebook[0].name, "shubha"); // The strcpy function is used to copy the string literals into the name field of each struct.
    // second array element contains 3 struct fields
    facebook[1].code = 110;
    facebook[1].salary = 1434356;
    strcpy(facebook[1].name, "samanta");

    printf("Done");

    // Print elements
    for (int i = 0; i < 2; i++)
    {
        printf("Employee %d:\n", i + 1);
        printf("Code: %d\n", facebook[i].code);
        printf("Salary: %.2f\n", facebook[i].salary);
        printf("Name: %s\n\n", facebook[i].name);
    }

    return 0;
    }