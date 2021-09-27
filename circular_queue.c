#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct circularQueue
{
    int front;
    int end;
    int size;
    int *arr;
};
int isEmpty(struct circularQueue *q)
{
    if (q->front == q->end)
    {
        return 1;
    }
    return 0;
}

int isFull(struct circularQueue *q)
{
    if (q->front == (q->end + 1) % q->size)
    {
        return 1;
    }
    return 0;
}
int display(struct circularQueue *q)
{
    if (isEmpty(q))
    {
        printf("stack underflow, nothing to show!\n");
    }
    else
    {
        int i = q->front;
        do
        {
            printf("Element %d\n", q->arr[i]);
            i = (i + 1) % (q->size);
        } while (i != q->end);
    }
}
int enQueue(struct circularQueue *q, int value)
{
    if (isFull(q))
    {
        printf("stack overflow, no space to insert for element %d\n", value);
    }
    else
    {
        // printf(" end %d\n", q->end);
        q->arr[q->end] = value;
        q->end = (q->end + 1) % (q->size);
    }
}

int deQueue(struct circularQueue *q)
{
    if (isEmpty(q))
    {
        printf("stack underflow, nothing to delete\n");
    }
    else
    {

        q->front = (q->front + 1) % (q->size);
    }
}

int main()
{
    struct circularQueue *q = (struct circularQueue *)malloc(sizeof(struct circularQueue));
    q->front = 0;
    q->end = 0;
    q->size = 5;
    q->arr = (int *)malloc((q->size) * sizeof(int));
    enQueue(q, 10);
    enQueue(q, 20);
    enQueue(q, 30);
    enQueue(q, 40);
    deQueue(q);
    deQueue(q);
    enQueue(q, 50);
    enQueue(q, 60);
    enQueue(q, 70);
    display(q);
    getch();
    return 0;
}