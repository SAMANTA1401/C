#include<stdio.h>

int main(){
    FILE *ptr;

    // ptr = fopen("file_sample.txt","r"); // for reading
    ptr = fopen("file_sample.txt", "w"); //for writing

    return 0;
}