#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define FUN(i, j) i##j
struct node
{
    int data;
    struct node *next;
};

struct node *createNode(int value)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = value;
    p->next = NULL;
    return p;
}

void traversal(struct node *head)
{
    while (head != NULL)
    {
        printf("%d \n", head->data);
        head = head->next;
    }
    printf("------------------------\n");
}

int main()
{

    int n, data;
    struct node *n0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &data);

        struct node *FUN(n, i) = createNode(data);
    }

    // Displaying linked list
    printf("Display linked list\n");
    traversal(n0);

    //call reverse function

    return 0;
}