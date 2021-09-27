#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{
    int size;
    int top;
    char *arr;
};
int isEmpty(struct stack *localPtr)
{
    if (localPtr->top == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(struct stack *localPtr)
{
    if (localPtr->top == localPtr->size - 1)
    {
        return 1;
    }
    return 0;
}

int check(char expressionElement, char stackTop)
{
    // printf("\ncheck %c\n", expressionElement);
    // printf("\ncheck %c\n", stackTop);
    if ((expressionElement == '+' || expressionElement == '-') && (stackTop == '*' || stackTop == '/'))
    {
        return 0;
    }
    else if (expressionElement == stackTop)
    {
        return 0;
    }
    else if ((expressionElement == '*' && stackTop == '/') || (expressionElement == '/' && stackTop == '*'))
    {
        return 0;
    }
    else if ((expressionElement == '+' && stackTop == '-') || (expressionElement == '-' && stackTop == '+'))
    {
        return 0;
    }

    return 1;
}

int push(struct stack *localPtr, char value)
{
    if (isFull(localPtr))
    {
        printf("stack overflow!\n");
        return 0;
    }
    else
    {
        // printf("\nPusing %c\n", value);
        localPtr->top += 1;
        localPtr->arr[localPtr->top] = value;
        return 1;
    }
}

char pop(struct stack *localPtr)
{
    if (isEmpty(localPtr))
    {
        printf("stack underflow!\n");
        return 0;
    }
    else
    {
        return localPtr->arr[localPtr->top--];
    }
}

int displayStack(struct stack *localPtr)
{
    for (int i = localPtr->top; i >= 0; i--)
    {
        printf("Element %c \n", localPtr->arr[i]);
    }
}

int infixToPostfix(char expression[], struct stack *localPtr)
{
    printf("\nAfter infix to Postfix conversion\n");
    printf("---------------------------------\n");
    int i = 0;
    do
    {
        // printf("%c \n", expression[i]);
        if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/')
        {
            if (isEmpty(localPtr))
            {
                push(localPtr, expression[i]);
            }
            else if (!check(expression[i], localPtr->arr[localPtr->top]))
            {
                do
                {

                    char poppedElement = pop(localPtr);
                    printf("%c", poppedElement);
                } while (!check(expression[i], localPtr->arr[localPtr->top]));
                push(localPtr, expression[i]);
            }
            else
            {

                push(localPtr, expression[i]);
            }
        }
        else
        {
            printf("%c", expression[i]);
        }
        i++;
    } while (expression[i] != '\0');

    // printf("%d \n", localPtr->top);
    // displayStack(localPtr);

    while (localPtr->top != -1)
    {
        char poppedElement = pop(localPtr);
        printf("%c", poppedElement);
    }
    // printf("%d \n", localPtr->top);
    return 0;
}
int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 50;
    s->top = -1;
    s->arr = (char *)malloc((s->size) * sizeof(char));
    char expression[50];
    printf("Enter Expression\n");
    gets(expression);
    infixToPostfix(expression, s);
    // displayStack(s);
    getch();
    return 0;
}
