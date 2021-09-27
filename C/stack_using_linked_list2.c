#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;
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
    printf("\ndisplaying linked list\n\n");
    if (isEmpty(top))
    {
        printf("stack underflow, nothing to show !\n");
    }
    else
    {
        int i = 1;
        while (top != NULL)
        {
            printf("%d. Element %d\n", i, top->data);
            top = top->next;
            i += 1;
        }
        printf("--------------\n");
    }
}
struct node *push(struct node *localTop, int value)
{
    if (isFull())
    {
        printf("Stack overflow, no space to push !");
    }
    else
    {
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = value;
        newNode->next = localTop;
        localTop = newNode;
        top = localTop;
        return top;
    }
}

struct node *pop(struct node *localTop)
{
    if (isEmpty(top))
    {
        printf("Stack underflow, nothing to pop !");
    }
    else
    {

        struct node *newPointer = localTop;
        localTop = localTop->next;
        free(newPointer);
        top = localTop;
        return top;
    }
}
struct node *peek(struct node *localTop, int index)
{
    if (isEmpty(top))
    {
        printf("stack underflow, nothing to peek");
    }
    else
    {
        for (int i = 1; i <= index; i++)
        {
            if (i == index)
            {
                printf("element at index %d is %d\n", i, localTop->data);
            }
            localTop = localTop->next;
        }
    }
}
int stackTop(struct node *localTop)
{
    printf("Top element of this stack is %d\n", localTop->data);
}

int stackButtom(struct node *localTop)
{
    while (localTop->next != NULL)
    {
        localTop = localTop->next;
    }
    printf("last element of this stack is %d", localTop->data);
}

int main()
{

    display(top);
    push(top, 10);
    push(top, 20);
    push(top, 30);
    push(top, 40);
    display(top);
    top = pop(top);
    display(top);
    peek(top, 3);
    stackTop(top);
    stackButtom(top);
    return 0;
}