#include<stdio.h>

int main(){
    int i =45;
    int *j = &i; // j will now store the address of i
    int **k = &j;// pointer to pointer
    printf("%d\n", i);
    printf("%d\n", &i);

    printf("%u\n",j);
    printf("%d\n", *j);
    printf("%u\n", &j);
    printf("%u\n", *(&j));

    printf("%u\n", k);
    printf("%u\n", &k);
    printf("%u\n", *k);
    printf("%u\n", *(&k));
    printf("%u\n", **k);
    printf("%u\n", **(&k));

    return 0;
}