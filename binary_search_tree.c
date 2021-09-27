#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;
}

void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        // printf("%d ", root->data);
        inOrder(root->right);
    }
}

int main()
{

    /*
        tree
        5
        /\
       /  \
      3    6
     / \
    1   4
    */
    struct node *n1 = createNode(5);
    struct node *n2 = createNode(3);
    struct node *n3 = createNode(6);
    struct node *n4 = createNode(1);
    struct node *n5 = createNode(4);
    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;
    isBST(n1);
    getch();
    return 0;
}