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

void preOrder(struct node *node)
{
    if (node != NULL)
    {
        printf("%d ", node->data);
        preOrder(node->left);
        preOrder(node->right);
    }
}

void postOrder(struct node *root)
{

    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}

void inOrder(struct node *root)
{

    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

int main()
{
    struct node *n1 = createNode(4);
    struct node *n2 = createNode(1);
    struct node *n3 = createNode(6);
    struct node *n4 = createNode(5);
    struct node *n5 = createNode(2);
    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;

    /*
        tree
        4
        /\
       /  \
      1    6
     / \
    5   2
    */

    printf("inOrder traversal\n");
    inOrder(n1);
    printf("\n");

    printf("preOrder traversal\n");
    preOrder(n1);
    printf("\n");

    printf("postOrder traversal\n");
    postOrder(n1);
    printf("\n");

    getch();
    return 0;
}