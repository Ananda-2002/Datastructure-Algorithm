#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

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

struct node *reverse(struct node *head)
{
    struct node *current = head;
    struct node *prev = NULL;
    struct node *next = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

int main()
{
    // creating nodes
    struct node *n1 = createNode(1);
    struct node *n2 = createNode(2);
    struct node *n3 = createNode(3);
    struct node *n4 = createNode(4);
    struct node *n5 = createNode(5);

    // linking nodes
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    // Displaying linked list
    printf("Display linked list\n");
    traversal(n1);

    //call reverse function
    n1 = reverse(n1);

    // displaying after reverse
    printf("Display after reverse linked list\n");
    traversal(n1);

    return 0;
}