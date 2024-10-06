#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *head)
{
    struct Node *ptr = head;
    printf("Element is %d\n", ptr->data);
    ptr = ptr->next;
    do
    {
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}
struct Node *insertAtFirst(struct Node *head, int data) //error
{

    struct Node *ptr ;
    ptr = (struct Node *)malloc(sizeof(struct Node));

    ptr->data = data;

    struct Node *p ;
    p= head->next;

    while (p->next != head)
    {
        // printf("hihi");

        p = p->next;
    }

    // At this point p points to the last node of this circular linked list
    printf("hihi");

    p->next = ptr;
    printf("hihi");

    ptr->next = head;   
    head = ptr;
    printf("hihi");

    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // allocate memory for nodes in the linked list in heap

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // link first and second nodes
    head->data = 7;
    head->next = second;

    // link  second and third nodes
    second->data = 11;
    second->next = third;

    // terminates the list at the third node
    third->data = 66;
    third->next = NULL;

    // linkedListTraversal(head);
    head = insertAtFirst(head, 80);  //error
    // printf("hihi");

    linkedListTraversal(head);

    return 0;
}