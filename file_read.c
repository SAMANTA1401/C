#include<stdio.h>

int main()
{
    FILE *ptr = NULL;
    char string[34];
    ptr = fopen("file_open.txt","r");
    fscanf(ptr,"%s",string);
    printf("The content of this file has %s\n",string);
    fclose(ptr);
    return 0;
}