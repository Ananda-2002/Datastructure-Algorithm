#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        // printf("stack underflow\n");
        return 1;
    }
    return 0;
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        // printf("stack overflow\n");
        return 1;
    }
    return 0;
}
int display(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("stack underflow , nothing to show\n");
    }
    else
    {
        int j = 1;
        for (int i = ptr->top; i >= 0; i--)
        {
            printf(" %d. element %d\n", j, ptr->arr[i]);
            j += 1;
        }
    }
    printf("---------------------\n");
    return 0;
}
int push(struct stack *ptr, int value)
{
    if (isFull(ptr))
    {
        printf("%d cannot be pushed !!!\n", value);
        printf("stack overflow, no space to push !!!\n");
    }
    else
    {
        ptr->top += 1;
        ptr->arr[ptr->top] = value;
    }
    return 0;
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("stack underflow, nothing to delete\n");
    }
    else
    {
        ptr->top = ptr->top - 1;
    }
    return 0;
}

int peek(struct stack *ptr, int position)
{
    if (isEmpty(ptr))
    {
        printf("stack underflow , nothing to show\n");
    }
    else if (position < 0 || position > ptr->top + 1)
    {
        printf("invalid position\n");
    }
    else
    {
        int value = ptr->arr[ptr->top - position + 1];
        printf("Element at %d position is %d \n", position, value);
    }
    printf("---------------------\n");
    return 0;
}
int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 20;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    push(s, 10);
    push(s, 20);
    push(s, 30);
    push(s, 40);
    push(s, 50);
    push(s, 60);
    push(s, 70);
    push(s, 80);
    display(s);
    peek(s, 3);

    pop(s);
    pop(s);

    display(s);
    push(s, 40);
    display(s);
    return 0;
}