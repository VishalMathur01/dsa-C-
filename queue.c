#include<stdio.h>
#include<malloc.h>

struct node *f=NULL;
struct node *r=NULL;

struct node
{
    int data;
    struct node *next;
};

void insertion(int data)
{
    struct node *p=(struct node *) malloc (sizeof(struct node));
    if(p==NULL)
    printf("the queue is full"); 
    else
    {
        p->data=data;
        p->next=NULL;
        if(r==NULL)
        f=r=p;
        else
        {
            r->next=p;
            r=p;
        }
    }
}

int deletion ()
{
    int flag=-1;
    struct node *p=f;
    if(f==NULL&&f==r)
    printf("The queue is empty (kuch acha kaam kar lo )");
    else
    {
       f=f->next;
       flag=f->data;
       free(p); 
    }
    return flag;
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
    printf("Insertion operation:\n");
    traversal(f);
    insertion(5);
    insertion(53);
    insertion(86);
    traversal(f);
    printf("Queue after deletion operation:\n");
    deletion();
    traversal(f);
    return 0;
}