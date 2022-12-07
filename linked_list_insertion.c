#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node * insert_at_begenin(struct node *head, int data)
{
    struct node *ptr=(struct node *) malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}

struct node * insert_in_berweenn(struct node *head, int data, int index)
{
    struct node *ptr =(struct node *) malloc(sizeof(struct node));
    struct node *p= head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr-> next= p->next;
    p->next=ptr;
    return head;
}

struct node *insert_at_end(struct node *head, int data)
{
    struct node *ptr=(struct node *) malloc(sizeof(struct node));
    struct node *p=head;

    while(p->next!=NULL)
    {
        p=p->next;
    }
    ptr->data=data;
    p->next=ptr;
    ptr->next=NULL;
    return head;
}

struct node *insertion_after_node(struct node *head, struct node *prevnode, int data)
{
    struct node *ptr=(struct node *) malloc(sizeof(int));
    ptr->data=data;

    ptr->next=prevnode->next;
    prevnode->next=ptr;
    return head;

}

struct node *deletefirst(struct node *head)
{
    struct node *ptr=head;
    head=head->next;
    free(ptr);  
    return head;

}

struct node *delete_at_index(struct node *head, int index)
{
    struct node *p=head;
    struct node *ptr=p->next;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        ptr=ptr->next;
    }
    p->next=ptr->next;
    free(ptr);
    return head;
}

struct node * deletion_at_end(struct node *head)
{
    struct node *p=head;
    struct node *ptr=p->next;
    while(ptr->next!=NULL)
    {
        p=p->next;
        ptr->next;
    }
    p->next=NULL;
    free(ptr);
    return head;
}

struct node *deletion_at_index(struct node *head, int value)
{
    struct node *ptr=head;
    struct node *p=ptr->next;
    int i=0;
    while(p->data!=value && p->next!=NULL)
    {
        ptr=ptr->next;
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    free(p);
    return head;
}
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
    printf("before insertion:\n");
    traversal(head);
    head=insert_at_begenin(head, 10);
    // head=insert_in_berweenn(head, 10, 1);
    // head=insert_at_end(head, 10);
    // head=insertion_after_node(head,second,10);
    printf("after insertion:\n");
    traversal(head);
    printf("after deletion:\n");
    head=deletefirst(head);
    traversal(head);
    free(head);
    free(second);
    free(third);
    return 0;
}
