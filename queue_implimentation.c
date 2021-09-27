#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct queue
{
    int top;
    int end;
    int size;
    int *arr;
};
int isEmpty(struct queue *localPtr)
{
    if (localPtr->top == localPtr->end)
    {
        localPtr->top = -1;
        localPtr->end = -1;
        return 1;
    }
    return 0;
}

int isFull(struct queue *localPtr)
{
    if (localPtr->end == localPtr->size - 1)
    {
        return 1;
    }
    return 0;
}
int display(struct queue *localPtr)
{
    if (isEmpty(localPtr))
    {
        printf("stack underflow, nothing to show\n");
    }
    else
    {
        for (int i = localPtr->top + 1; i <= localPtr->end; i++)
        {
            printf("Element %d\n", localPtr->arr[i]);
        }
    }
    printf("------------------\n");
}
int enQueue(struct queue *localPtr, int value)
{
    if (isFull(localPtr))
    {
        printf("queue overflow\n");
    }
    else
    {
        localPtr->end += 1;
        localPtr->arr[localPtr->end] = value;
        return 0;
    }
}

int deQueue(struct queue *localPtr)
{

    if (isFull(localPtr))
    {
        printf("stack underflow\n");
    }
    else
    {
        localPtr->top = localPtr->top + 1;
    }
}

int main()
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->top = -1;
    q->end = -1;
    q->size = 50;
    q->arr = (int *)malloc((q->size) * sizeof(int));
    enQueue(q, 10);
    enQueue(q, 20);
    enQueue(q, 30);
    enQueue(q, 40);
    enQueue(q, 50);
    display(q);
    deQueue(q);
    deQueue(q);
    display(q);
    getch();
    return 0;
}