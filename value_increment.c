#include<stdio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node *next;
};

void traversal(struct node *ptr)
{
    while(ptr!=NULL)
    {
    printf("Element: %d\n", ptr->data);
    ptr=ptr->next;
    }
}

void increment(struct node *p)
{
    int count=0;
    while(p->next!=NULL)
    {
        p->data+=10;
        p=p->next;
    }
    p->data+=10;
}

int main()
{
    struct node *head=(struct node*)malloc(sizeof(struct node));
    struct node *second=(struct node*)malloc(sizeof(struct node));
    struct node *third=(struct node*)malloc(sizeof(struct node));
    struct node *fourth=(struct node*)malloc(sizeof(struct node));

    head->data=5;
    head->next=second; 

    second->data=55;
    second->next=third;

    third->data=55;
    third->next=fourth;

    fourth->data=5;
    fourth->next=NULL;
    printf("Linked list before increasing the value:");
    traversal(head);
    printf("The incremented linked list is:\n");
    increment(head);
    traversal(head);

    return 0;
}