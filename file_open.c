#include<stdio.h>

int main()
{
    FILE *fp = NULL;
    fp=fopen("file_open.txt","r");
    // char c = fgetc(fp);
    // char *c = fgetc(fp);

    // printf("%c\n",fp);

    char str[4];
    fgets(str,5,fp);
    printf("%s\n",str);

    

    return 0;



}
