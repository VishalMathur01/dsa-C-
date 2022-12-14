#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
    int data;
    int perv;
    int nxt;
};

struct node *insomia(struct node *head, int dara)
{
    struct node *p=(struct node *)malloc(sizeof(struct node));
    if(p!=NULL)
    {
    p->data=dara;
    p->nxt=head;
    p->perv=NULL;
    head=p;
    return head;
    }
    else
    {
        printf("GET A FAST COMPUTER WITH MORE RAM!!!!");
        return head;
    }
}

struct node *delorian(struct node *head)
{
    if(head->nxt==NULL)
    {
        printf("WHO YOU TRYNNA PLAY HA!!!");
        return head;
    }
    else
    {
        struct node *p=head;
        head=head->nxt;
        head->perv=NULL;
        free(p);
        return head;
    }
}

void traversal(struct node *ptr)
{
    while(ptr!=NULL)
    {
    printf("Element: %d\n", ptr->data);
    ptr=ptr->nxt;
    }
}

int main()
{
    
    struct node *head;
    struct node *second;
    struct node *third;
    head=(struct node *) malloc(sizeof(struct node));
    second=(struct node*) malloc(sizeof(struct node));
    third=(struct node*) malloc(sizeof(struct node));

    head->data=8;
    head->nxt= second;
    head->perv=NULL;

    second->data=22;
    second->nxt= third;
    second->perv=head;

    third->data=4;
    third->nxt=NULL;
    third->perv=second;

    printf("before insertion:\n");
    traversal(head);
    head=insomia(head, 10);
    printf("after insertion:\n");
    traversal(head);
    printf("after deletion:\n");
    head=delorian(head);
    traversal(head);
    free(head);
    free(second);
    free(third);
    return 0;
}
