#include<stdio.h>
#include<stdlib.h>

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
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    head=(struct node *) calloc(1,sizeof(struct node));
    second=(struct node*) calloc(1,sizeof(struct node));
    third=(struct node*) calloc(1,sizeof(struct node));

    head->data=8;
    head->next= second;

    second->data=22;
    second->next= third;

    third->data=4;
    third->next=NULL;
    traversal(head);
    free(head);
    free(second);
    free(third);
    return 0;
}
