#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int isEmpty(struct node *top)
{
    if (top == NULL)
    {
        // printf("stack underflow, nothing to show !\n");
        return 1;
    }
    return 0;
}
int isFull()
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    if (newNode == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int display(struct node *top)
{
    if (isEmpty(top))
    {
        printf("stack underflow, nothing to show !\n");
    }
    else
    {
        while (top != NULL)
        {
            printf("Element %d\n", top->data);
            top = top->next;
        }
        printf("--------------\n");
    }
}
struct node *push(struct node *top, int value)
{
    if (isFull())
    {
        printf("Stack overflow, no space to push !");
    }
    else
    {
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        return top;
    }
}

struct node *pop(struct node *top)
{
    if (isEmpty(top))
    {
        printf("Stack underflow, nothing to pop !");
    }
    else
    {

        struct node *newPointer = top;
        top = top->next;
        free(newPointer);

        return top;
    }
}

int main()
{
    struct node *top = NULL;
    display(top);
    top = push(top, 10);
    top = push(top, 20);
    top = push(top, 30);
    top = push(top, 40);
    display(top);
    top = pop(top);
    display(top);
    return 0;
}