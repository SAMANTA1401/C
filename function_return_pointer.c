/*Program that shows how a function returns a pointer */

#include<stdio.h>

void main(){
    float *a;
    float *func(); /* function prototype */
    a= func();
    printf("Adress =%u",  a);


}
float *func(){
    float r = 5.3;
    return (&r);
}