#include<stdio.h>

float len, bre;
float peri, are;
void main(){
    

    int periarea(float length,float breadth,float *peri, float *are);
    printf("Enter the length: ");
    scanf("%f%f",len,bre);
    periarea(len,bre,&len,&are);
    printf("\nPerimeter of the rectangle is %f metres", peri); 
    printf("\nArea of the rectangle is %f sq. metres", are);

    
}
int periarea(float length, float breadth, float *peri,float *are){
        *peri = 2*(len+bre);
        *are = len*bre;
        return *peri, *are;
    }