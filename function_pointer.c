#include<stdio.h>

int main()
{
    int x = 10;
    int y = 20;

    void swapValue(int x,int y); /*function prototype*/
    void swapRef(int *px, int *py);  /*function prototype*/

    
    printf("PASS BY VALUE METHOD\n"); 
    printf("Before calling function swapVal x=%d y=%d",x,y); 
    swapValue(x, y); /* copy of the arguments are passed */ 
    printf("\nAfter calling function swapVal x=%d y=%d",x,y); 
    printf("\n\nPASS BY REFERENCE METHOD"); 
    printf("\nBefore calling function swapRef x=%d y=%d",x,y); 
    swapRef(&x,&y); /*address of arguments are passed */ 
    printf("\nAfter calling function swapRef x=%d y=%d",x,y);

}

    


void swapValue(int x, int y){
        int temp;
        temp=x;
        x=y;
        printf("\n Within the function swapRef  *x=%d *y=%d", x,y);
        
        return ;

}
void swapRef(int *px, int *py){
        int temp;
        temp = *px;
        *px = *py;
        *py = temp;
        printf("\n Within the function swapRef  *px=%d *py=%d", *px,*py);
        return ;
}