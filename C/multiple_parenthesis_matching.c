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

char pop(struct stack *localPtr)
{
    char value = localPtr->arr[localPtr->top];
    localPtr->top -= 1;
    return value;
}
char top(struct stack *localPtr)
{

    printf("top element %d\n", localPtr->top);
    char value = localPtr->arr[localPtr->top];
    return value;
}

int match(char a, char b)
{
    if (a == '(' && b == ')')
    {
        return 1;
    }
    else if (a == '{' && b == '}')
    {
        return 1;
    }
    else if (a == '[' && b == ']')
    {
        return 1;
    }
    return 0;
}

int parenthesisCheck(char localArr[], struct stack *localPtr)
{
    int i = 0, flag = 0;
    char value, value1;
    while (localArr[i] != '\0')
    {
        char c = localArr[i];
        int intC = localArr[i];
        if (c == '{' || c == '[' || c == '(')
        {
            push(localPtr, c);
            flag = 1;
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
                value = pop(localPtr);
                value1 = localArr[i];
                match(localArr[i], value1);
                printf("popped %c\n", value);
            }
        }

        i += 1;
    }
    if (!flag)
    {
        printf("no parenthesis in this expresssion\n");
    }
    else if (isEmpty(localPtr))
    {
        if (match(value, value1))
        {
            printf("parenthesis balanced\n");
        }
        else
        {
            printf("parenthesis is not balanced\n");
        }
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
    parenthesisCheck(charArr, s);
    getch();
    return 0;
}