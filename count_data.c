#include<stdio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node *next;
};

int county(struct node *p, int val)
{
    int count=0;
    while(p->next!=NULL)
    {
        if(p->data==val)
        count++;
        p=p->next;
    }
    if(p->data==val)
    count++;
    return count;
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

    int haha=0;
    printf("Enter the value you want to search in the linked list:");
    scanf("%d",&haha);
    printf("The value %d was found in the linked list %d times:",haha,county(head,haha));
    return 0;
}