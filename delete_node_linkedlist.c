#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Case 1 : Deleting the first element from the linked list
struct Node * deleteFirst(struct Node *head){
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;

}
// Case 2: Deleting the element at a given index from the linked list
struct Node * deleteAtIndex(struct Node * head, int index){
    struct Node * p = head;
    struct Node *q = head->next;
    for (int i = 0; i<index-1; i++){
        p = p->next;
        q = q->next;
    }
    p->next = p->next;
    free(q);
    return head;
}
// Case 3: Deleting the last element
struct Node * deleteAtEnd(struct Node * head){
    struct Node * p = head;
    struct Node *q = head->next;
    while (q->next !=NULL)
    {
        p = p->next;
        q = q->next;

    }
    p->next = q->next;
    free(q);
    return head;
}

// Case 4 :Deleting the element with a given value from the linked list
struct Node * deleteTheValue(struct Node * head, int value){
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->data!=value && q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->next == value)
    {
        p->next = q->next;
        free(q);
    }
    

    
    return head;
    
}

int main(){
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

    linkedListTraversal(head);
    printf("new head\n");

    // head = deleteFirst(head); //for deleting first element
    // head = deleteAtIndex(head, 2);
    // head = deleteAtEnd(head);
    linkedListTraversal(head);

    return 0;
}