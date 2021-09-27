#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linkedListTraversal(struct node *ptr)
{
    printf("Traversing Linked List\n");
    while (ptr != NULL)
    {
        printf("Element %d \n", ptr->data);
        ptr = ptr->next;
    }
    printf("-----------------------\n");
}

struct node *deletingFirstElement(struct node *ptr)
{
    printf("Invoke Deleting First Element function\n");
    struct node *p = ptr;
    ptr = ptr->next;
    free(p);
    return ptr;
}
void deletingLastElement(struct node *ptr)
{
    printf("Invoke Deleting Last Element function\n");
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }
    struct node *p = ptr->next;
    ptr->next = NULL;
    free(p);
}
void deletingByIndex(struct node *ptr, int index)
{
    printf("Invoke Deleting By Index function\n");
    int i;
    struct node *p = (struct node *)malloc(sizeof(struct node));
    struct node *q = (struct node *)malloc(sizeof(struct node));
    p = ptr;
    q = ptr->next;
    for (i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
}
void deletingByValue(struct node *ptr, int value)
{
    printf("Invoke Deleting By Value function\n");
    struct node *p = (struct node *)malloc(sizeof(struct node));
    struct node *q = (struct node *)malloc(sizeof(struct node));
    p = ptr;
    q = ptr->next;
    while (q->data != value)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = fifth;

    fifth->data = 50;
    fifth->next = NULL;

    linkedListTraversal(head);
    head = deletingFirstElement(head);
    linkedListTraversal(head);
    deletingLastElement(head);
    linkedListTraversal(head);
    deletingByIndex(head, 1);
    linkedListTraversal(head);
    deletingByValue(head, 40);
    linkedListTraversal(head);
    getch();
    return 0;
}