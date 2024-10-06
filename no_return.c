#include<stdio.h>


void main(){
    void message();
    printf("control is in main\n");
    message();                          /* Type 1 Function */
    printf("control is again in main\n");
}
void message(){
    printf("control is in message function\n");
}                                               /* does not return anything */
