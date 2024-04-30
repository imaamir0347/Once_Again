//Binary Tree in C
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} Node;
//Creating Node
void postorder(Node *root);
void preorder(Node *root);
void inorder(Node*root);
Node* createnode();
void mian()
{
    Node* root=createnode();
    printf("Inorder Traverse:");
    inorder(root);
    printf("Preorder Traverse:");
    preorder(root);
    printf("postorder( Traverse:");
    postorder(root);

}

Node* createnode()
{
    int value;
    Node *newnode;
    newnode=(Node*)malloc(sizeof(Node));
    printf("Enter Data(-1 for no node):");
    scanf("%d",&value);
    if(value==-1)
        return 0;
    newnode->data=value;
    printf("Enter Left Child of %d:",value);
    newnode->left=createnode();
    printf("Enter Right Child of %d:",value);
    newnode->right=createnode();


    return newnode;
}
//Inorder Traverse
void inorder(Node*root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d->",root->data);
    inorder(root->right);

}
//Preorder Traverse
void preorder(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    printf("%d->",root->data);
    preorder(root->left);
    preorder(root->right);

}
//Postorder Traverse
void postorder(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d->",root->data);

}
