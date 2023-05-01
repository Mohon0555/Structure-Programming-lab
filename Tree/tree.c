#include <stdio.h>
#include <stdlib.h>


struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* newNode(int data)
{

    struct node* node=(struct node*) malloc(sizeof (struct node));

    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return(node);

};

void preOrder(struct node* node)
{

    if(node==NULL)
        return;

    printf(" %d ", node->data);
    preOrder(node->left);
    preOrder(node->right);

}

void inOrder(struct node* node)
{
    if(node==NULL)
        return;
    inOrder(node->left);
    printf(" %d ", node->data);
    inOrder(node->right);
}

void postOrder(struct node* node)
{
    if(node==NULL)
        return;
    postOrder(node->left);
    postOrder(node->right);
    printf(" %d ", node->data);
}

int main()
{

    struct node* root=newNode(1);
    root->left= newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);

    printf(" preOrder:");
    preOrder(root);
    printf(" \n inOrder:");
    inOrder(root);
    printf(" \n postOrder:");
    postOrder(root);
}

