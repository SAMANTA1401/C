#include<stdio.h>

int main()
{
    FILE *ptr = NULL;
    char string[34]="this is c fiel";
    ptr = fopen("file_open.txt","w");
    fprintf(ptr,"%s",string);
    fclose(ptr);
    return 0;
}