#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element %d \n", ptr->data);
        ptr = ptr->next;
    }
    printf("-----------------------\n");
}
struct node *insertAtBegining(struct node *ptr, int data)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->next = ptr;
    return p;
}
void insertAtEnd(struct node *ptr, int data)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = data;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = p;
    p->next = NULL;
}
void insertAtIndex(struct node *ptr, int data, int index)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    int i = 0;
    for (i = 0; i < index - 1; i++)
    {
        ptr = ptr->next;
    }
    p->next = ptr->next;
    ptr->next = p;
}

void insertAfterNode(struct node *ptr, int data, struct node *newNode)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->next = newNode->next;
    newNode->next = p;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    linkedListTraversal(head);

    head = insertAtBegining(head, 5);
    head = insertAtBegining(head, 4);
    linkedListTraversal(head);

    insertAtEnd(head, 40);
    linkedListTraversal(head);

    insertAtIndex(head, 15, 4);
    linkedListTraversal(head);

    insertAfterNode(head, 25, second);
    linkedListTraversal(head);

    return 0;
}