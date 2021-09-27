#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void traversal(struct node *head)
{
    struct node *first = head;
    do
    {
        printf("Element %d \n", first->data);
        first = first->next;
    } while (first != head);
    printf("-----------\n");
}
struct node *insertAtFirst(struct node *head, int data)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    struct node *last = head;
    do
    {
        last = last->next;
    } while (last->next != head);
    last->next = new;
    new->next = head;
    return new;
}

void insertAtEnd(struct node *head, int data)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    struct node *last = head;
    do
    {
        last = last->next;
    } while (last->next != head);
    last->next = new;
    new->next = head;
}

void insertAfterElement(struct node *head, int data, int element)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    struct node *p = head;
    do
    {
        p = p->next;
    } while (p->data != element);
    new->next = p->next;
    p->next = new;
}

void insertAtIndex(struct node *head, int data, int index)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    struct node *p = head;
    int i;
    for (i = 0; i < index - 1; i++)
    {
        p = p->next;
    }
    new->next = p->next;
    p->next = new;
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

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = fifth;

    fifth->data = 50;
    fifth->next = first;
    traversal(first);
    first = insertAtFirst(first, 5);
    traversal(first);

    insertAtFirst(first, 60);
    traversal(first);

    insertAfterElement(first, 45, 40);
    traversal(first);

    insertAtIndex(first, 35, 4);
    traversal(first);
    getch();
    return 0;
}