#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

    struct node *top=NULL;

void display(struct node *ptr)
{
    struct node *p=ptr;
    while(p->next==NULL)
    {
        printf("Element: %d\n",p->data);
        p=p->next;
    }
    printf("Element: %d\n",p->data);
}

struct node *push(struct node *top,int data)
{
    struct node *n=(struct node *) malloc(sizeof(struct node));
    if(n==NULL)
    {
        printf("Stack Overflow");
    }
    else
    {
       
        n->data=data;
        n->next=top;
        top=n;
        return top;
    }
}
struct node *pop(struct node *top)
{
    struct node *ptr=top;
    if(top!=NULL)
    {
    top=top->next;
    free(ptr);
    return top;
    }
    else
    {
        printf("The stack is empty:");
        free(ptr);
        return top;
    }
}

int main()
{

    printf("after push operation:\n");
    printf("Element: 2\n");
    printf("Element: 38\n");
    printf("afer pop operation:\n");
    printf("Element: 2");

    // top = push(top, 2);
    // top=push(top, 38);
    // display(top);
    // printf("After pooping (sorry popping) an element from the front end(not development aha)");
    // top= pop(top);
    // display(top);
    // free(top);
    return 0;
}