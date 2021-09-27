#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    char *arr;
};

int isEmpty(struct stack *localStack)
{
    if (localStack->top == -1)
    {
        // printf("stack underflow !");
        return 1;
    }
    else
    {
        return 0;
    }
}
int display(char localArr[])
{
    printf("expression is\n");
    int i = 0;
    while (localArr[i] != '\0')
    {
        printf("%c ", localArr[i]);
        i += 1;
    }
    printf("\n");
}

struct stack *displayStack(struct stack *localPtr)
{
    if (isEmpty(localPtr))
    {
        printf("stack underflow!\n");
    }
    else
    {
        while (localPtr->top >= -1)
        {
            printf("Element %c \n", localPtr->arr[localPtr->top]);
            localPtr->top -= 1;
        }
    }
}
struct stack *push(struct stack *localPtr, int value)
{
    localPtr->top += 1;
    localPtr->arr[localPtr->top] = value;
}

struct stack *pop(struct stack *localPtr)
{
    localPtr->top -= 1;
}
int check(char localArr[], struct stack *localPtr)
{
    int i = 0;
    while (localArr[i] != '\0')
    {
        char c = localArr[i];
        int intC = localArr[i];
        if (c == '{' || c == '[' || c == '(')
        {
            push(localPtr, c);
        }
        else if (c == '}' || c == ']' || c == ')')
        {
            if (isEmpty(localPtr))
            {
                printf("parenthesis is not balanced\n");
                return 0;
            }
            else
            {
                pop(localPtr);
            }
        }

        i += 1;
    }
    if (isEmpty(localPtr))
    {
        printf("parenthesis balanced\n");
    }
    else
    {
        printf("parenthesis is not balanced\n");
    }
    printf("\n");
    return 0;
}
int main()
{
    char charArr[100];
    int size = 100;
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->top = -1;
    s->size = size;
    s->arr = (char *)malloc((s->size) * sizeof(char));

    printf("Enter expression\n");
    gets(charArr);
    display(charArr);
    // printf("%d\n", s->top);
    // displayStack(s);
    check(charArr, s);
    // displayStack(s);
    // isEmpty(s);
    getch();
    return 0;
}