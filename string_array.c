/* Program that initializes 3 names in an array of strings and display them on to 
monitor.*/ 

#include<stdio.h>
#include<string.h>

void main(){
    int n;
    char names[3][10]={"Alex","Philip","Collins"};
    for ( n = 0; n < 3; n++)
    {
        printf("%s\n",names[n]);
        int s;
        // gets(&s);
        s = strlen(names[n]);
        printf("%d\n",s);

    }
    
}