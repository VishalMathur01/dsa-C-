#include<stdio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

void preorder(struct node *root)
{
    if(root!=NULL)
    {
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
    }
}

void postorder(struct node *root)
{
    if(root!=NULL)
    {
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
    }
}

void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// struct node * nyc_search(struct node *root, int k)
// {
//     while (root!=NULL)
//     {
//         if(root==k)
//         return root;
//         else if(root->data>k)
//         root = root->left;
//         else
//         root = root->right;
//     }
//     return NULL;
// }

// struct node * search (struct node *root, int k)
// {
//     if(root==NULL)
//     return NULL;
//     if(root->data == k)
//     return root;
//     else if(root->data >k)
//     return search(root->left, k);
//     else
//     return search(root->right, k);
// }

// int isb(struct node* root)
// {
//     static struct node* prev=NULL;
//     if(root!=NULL)
//     {
//         if(!isb(root->left))
//         return 0;
//         if(prev!=NULL && root->data <= prev->data)
//         return 0;
//         prev = root;
//         return isb(root->right);
//     }
// }

struct node * create_node(int val)
{
    struct node *d;
    d = (struct node *) malloc (sizeof(struct node));
    d->data = val;
    d->left = NULL;
    d->right = NULL;
    return d;
}

// void insert(struct node *root, int val)
// {
//     struct node *prev=NULL;
//     while(root!=NULL)
//     {
//         prev=root;
//         if(val == root->data)
//         return;
//         else if(val < root->data)
//         root = root->left;
//         else
//         root = root->right;
//     }
//     struct node *new=create_node(val);
//     if(val<prev->data)
//     root->left=new;
//     else 
//     root->right=new;
    
// }

int main()
{
    // Creation of the binary tree manually.
    // struct node *p;
    // p = (struct node*) malloc(sizeof(struct node));
    // p->left = NULL;
    // p->right = NULL;
    // p->data = 2;

    // struct node *p1;
    // p1 = (struct node*) malloc(sizeof(struct node));
    // p1->left = NULL;
    // p1->right = NULL;
    // p1->data = 1;

    // struct node *p2;
    // p2 = (struct node*) malloc(sizeof(struct node));
    // p2->left = NULL;
    // p2->right = NULL;
    // p2->data = 3;


    struct node *p = create_node(3);
    struct node *p1 = create_node(1);
    struct node *p2 = create_node(9);
    struct node *p3 = create_node(5);
    struct node *p4 = create_node(7);
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    printf("The pre order traversal of the above tree::");
    preorder(p);
    printf("\n");
    printf("The post order traversal of the above tree::");
    postorder(p);
    printf("\nThe in-order traversal of the above tree::");
    inorder(p);
    return 0;
}
