#include<stdio.h>
#include<string.h>

int main(){
    char st1[45] = "Hello ";
    char *st2 = "Harry";
    strcat(st1,st2);
    int val = strcmp(st1,st2);
    // printf("%s",st1);
    printf("%d", val);

    return 0;
}