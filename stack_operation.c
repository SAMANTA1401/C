#include<stdio.h>
#include<stdlib.h>


struct stack{
    int size;
    int top;
    int * arr;

};

int isEmpty(struct stack* ptr){
    if (ptr->top == -1)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}

int isFull(struct stack* ptr){
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}

void push(struct stack* ptr, int val){
    if (isFull(ptr))
    {
        printf("stack overflow");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;

    }
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("stack underflow");
    }
    else
    {
      int val  = ptr->arr[ptr->top];
      ptr->top--;
      return val;
    }
}

int peek(struct stack* sp, int i){
    int arrayInd = sp->top -i +1;
    if (arrayInd <0)
    {
        printf("Not a valid position for the stack\n");
        return -1;
    }else{
        return sp->arr[arrayInd];
    }
    
}

int stackTop(struct stack* sp){
    return sp->arr[sp->top];
}

int stackBottom(struct stack* sp){
    return sp->arr[0];
}

int main(){
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size =10;
    sp->top = -1;
    printf("hi\n");

    sp->arr  =(int *)malloc(sp->size * sizeof(int));
    printf("stack has been created successfully\n");


    if (isEmpty(sp))
    {
        printf("stack is empty\n");
    }

    printf("%d\n", isEmpty(sp));
    printf("%d\n", isFull(sp));

    push(sp, 50);
    push(sp, 50);
    push(sp, 50);
    push(sp, 50);
    push(sp, 52);
    push(sp, 51);
    push(sp, 50);

    // push(sp, 50);
    // push(sp, 50);
    // push(sp, 50);
    // push(sp, 50);
    // push(sp, 50);
    // push(sp, 50);
    // push(sp, 50);
    // push(sp, 50);
    // push(sp, 50);
    // push(sp, 50);

    printf("%d\n", isEmpty(sp));
    printf("%d\n", isFull(sp));

    for (int j = 1; j <= sp->top + 1; j++)
    {
        printf("The value at position %d is %d\n", j, peek(sp,j));
    }
    

    printf("popped %d from the stack\n", pop(sp));
    printf("popped %d from the stack\n", pop(sp));

    return 0;
}