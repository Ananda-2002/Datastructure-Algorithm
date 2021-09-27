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
        printf("%d ", root->data);
        inOrder(root->right);
    }
}
void insert(struct node *root, int key)
{
    struct node *prev = root;
    while (root != NULL)
    {
        prev = root;
        if (root->data == key)
        {
            printf("cannot insert %d, already in BTS", key);
            return;
        }
        else if (root->data > key)
        {
            root = root->left;
        }
        else if (root->data < key)
        {
            root = root->right;
        }
    }
    // printf("%d", prev->data);
    struct node *new = createNode(key);
    if (prev->data < key)
    {
        prev->right = new;
    }
    else
    {
        prev->left = new;
    }
    // return NULL;
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
    insert(n1, 7);
    insert(n1, 2);
    // printf("%d", n1->right->right->data);
    inOrder(n1);
    getch();
    return 0;
}