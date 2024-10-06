#include<stdio.h>

int main(){
    FILE *fp = NULL;
    fp = fopen("file_open.txt","r+");
    fputc('o',fp);
    fputs("oh my",fp);


    fclose(fp);
    return 0;
}