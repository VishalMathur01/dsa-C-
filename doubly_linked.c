#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
}*head=NULL;

void search(struct Node *head, int key)
{
    int flag=0;
    struct Node *ptr=head;
    while(ptr!=NULL)
    {
        if(ptr->data=key)
        {
            printf("Value found:\n");
            return;
        }
        ptr = ptr->next;
    }
    if(!flag)
    printf("Value not found:");
}

void display(struct Node *head)
{
    struct Node *ptr=head;
    while(ptr!=NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node * insertAtFirst(struct Node *head, int val){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = val;
    ptr->next = head;
    ptr->prev = head->prev;
    head->prev = ptr;
    head = ptr;
    return head;

}

struct Node *deleteatfirst(struct Node *head)
{
    struct Node *ptr=(struct Node *) malloc(sizeof(struct Node));
    if(head==NULL)
    {
        printf("The list is empty:\n");
        return head;
    }
    else
    {
        head=head->next;
        free(ptr);
        head->prev=NULL;
        return head;
    }
}

int main(){
    
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 4;
    head->next = second;
    head->prev=NULL;

    // Link second and third nodes
    second->data = 3;
    second->next = third;
    second->prev = head;

    // Link third and fourth nodes
    third->data = 6;
    third->next = fourth;
    third->prev = second;

    // Terminate the list at the third node
    fourth->data = 1;
    fourth->next = NULL;
    fourth->prev = third;

    printf("Doubly Linked list before insertion\n");
    display(head);
    head = insertAtFirst(head, 54);
    head = insertAtFirst(head, 58);
    head = insertAtFirst(head, 59);
    printf("Doubly Linked list after insertion\n");
    display(head);
    head =deleteatfirst(head);
    printf("The Linked list after deletion:\n");
    display(head);
    search(head, 3);
    free(head);
    free(second);
    free(third);
    free(fourth);
    return 0;
}