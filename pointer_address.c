# include <stdio.h> 
int main() 
{ 
int qty = 5;
printf("Address of the qty is %u \n",&qty);
printf("Value of the qty is %d\n",qty);
printf("value of the qty by pointer %d \n",*(&qty));
} 