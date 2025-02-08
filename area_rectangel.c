#include<stdio.h>

// Function prototype
void periarea(float length, float breadth, float *peri, float *are); //pointer store address of peri and are

void main(){
    float len, bre;
    float peri, are;
    printf("Enter the length and breadth: ");
    scanf("%f %f", &len, &bre); //store input val to address // enter 2 input with space
    //function call
    periarea(len,bre,&peri,&are); // passing val of len and bre and address of peri and are to the pointer

    printf("\nPerimeter of the rectangle is %f metres", peri); // print val or peri
    printf("\nArea of the rectangle is %f sq. metres", are); // print val or are

    
}
// Function definition
void periarea(float length, float breadth, float *peri,float *are){
    
        *peri = 2*(length + breadth); //store val of peri to address of peri 
        *are = length*breadth; //store val of are to address of are
        
    }