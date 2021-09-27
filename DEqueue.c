#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct DEqueue
{
    int top;
    int end;
    int size;
    int *arr;
};
int isEmpty(struct DEqueue *q)
{
    if (q->top == q->end)
    {
        return 1;
    }
    return 0;
}

int isFull(struct DEqueue *q)
{
    if (q->end == q->size - 1)
    {
        return 1;
    }
    return 0;
}
int enQueueR(struct DEqueue *q, int value)
{
    if (isFull(q))
    {
        printf("queue overflow, no space to insert %d!\n", value);
    }
    else
    {
        q->end += 1;
        q->arr[q->end] = value;
    }
}

int enQueueF(struct DEqueue *q, int value)
{
    if (isFull(q))
    {
        printf("queue overflow, no space to insert %d!\n", value);
    }
    else
    {
        if (q->top > -1)
        {
            q->arr[q->top] = value;
            q->top -= 1;
        }
    }
}

int deQueueF(struct DEqueue *q)
{
    if (isEmpty(q))
    {
        printf(" queue underflow, nothing to delete!\n");
    }
    else
    {
        q->top += 1;
    }
}

int deQueueR(struct DEqueue *q)
{
    if (isEmpty(q))
    {
        printf(" queue underflow, nothing to delete!\n");
    }
    else
    {
        q->end -= 1;
    }
}
int display(struct DEqueue *q)
{
    if (isEmpty(q))
    {
        printf("queue Underflow, nothing to display!\n");
    }
    else
    {
        for (int i = q->top + 1; i <= q->end; i++)
        {
            printf("Element %d\n", q->arr[i]);
        }
    }
    printf("---------------------\n");
}
int main()
{
    struct DEqueue *q = (struct DEqueue *)malloc(sizeof(struct DEqueue));
    q->top = q->end = -1;
    q->size = 5;
    q->arr = (int *)malloc((q->size) * sizeof(int));
    enQueueR(q, 10);
    enQueueR(q, 20);
    enQueueR(q, 30);
    enQueueR(q, 40);
    enQueueR(q, 50);
    enQueueR(q, 60);
    display(q);
    deQueueF(q);
    // deQueueR(q);
    enQueueF(q, 50);
    display(q);
    getch();
    return 0;
}