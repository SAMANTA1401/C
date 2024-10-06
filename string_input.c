#include<stdio.h>

int main(){
    char s[34];
    printf("Enter your name: ");
    scanf("%s",s);
    printf("Your name is %s", s); // it doesnot print word after space it get terminated to over come this we use gets() and puts()
     
    return 0;
}