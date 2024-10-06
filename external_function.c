#include<stdio.h>

int gv;
void main(int argc, char const *argv[])
{
    void functoin1();
    gv = 10;
    printf("%d is thd value of gv before function call\n",gv);
    function1();
    printf("%d is the value of gv after function call\n",gv);
    
};
void function1(){
    gv=15;
}
