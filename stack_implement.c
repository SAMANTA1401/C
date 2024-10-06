#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack* ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull(struct stack* ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    // printf("hihi");
    struct stack *s;
    // printf("hihi");

    s->size = 10;
    printf("hihi");

    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("hihi2");

    // pushing an element manually
    s->arr[0] = 4;
    s->top++;

    // check if the stack  isEmpty

    if (isEmpty(s))
    {
        printf("The stack is empty");
    }
    else
    {
        printf("The stack is not empty");
    }
    printf("hihi3");

    return 0;
}