#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

void traversal(struct node *head)
{
    struct node *first = head;
    while (first != NULL)
    {
        printf("Element %d\n", first->data);
        first = first->next;
    }
    printf("-----------\n");
}
void reverseTraversal(struct node *head)
{
    printf("Reverse Traversal\n");
    struct node *first = head;
    while (first->next != NULL)
    {
        first = first->next;
    }
    struct node *last = first;
    while (last != NULL)
    {
        printf("Element %d\n", last->data);
        last = last->prev;
    }
    printf("-----------\n");
}
int main()
{
    struct node *first = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));
    struct node *fifth = (struct node *)malloc(sizeof(struct node));

    first->data = 10;
    first->next = second;
    first->prev = NULL;

    second->data = 20;
    second->next = third;
    second->prev = first;

    third->data = 30;
    third->next = fourth;
    third->prev = second;

    fourth->data = 40;
    fourth->next = fifth;
    fourth->prev = third;

    fifth->data = 50;
    fifth->next = NULL;
    fifth->prev = fourth;

    traversal(first);

    reverseTraversal(first);

    getch();
    return 0;
}