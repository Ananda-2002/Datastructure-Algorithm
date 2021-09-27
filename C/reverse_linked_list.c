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
        printf("Element %d \n", (*ptr).data);
        ptr = (*ptr).next;
    }
}

int reverseLinkedList(struct node *ptr)
{
    if (ptr == NULL)
    {
        return 0;
    }
    else
    {
        reverseLinkedList(ptr->next);

        printf("Element %d \n", ptr->data);
    }
}

/* Function to reverse the linked list */
struct node *reverse(struct node *head)
{
    // Initialize current, previous and
    // next pointers
    struct node *current = head;
    struct node *prev = NULL, *next = NULL;

    while (current != NULL)
    {
        // Store next
        next = current->next;

        // Reverse current node's pointer
        current->next = prev;

        prev = current;
        // Move pointers one position ahead.
        current = next;
    }
    head = prev;
    return head;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    (*head).data = 10;
    (*head).next = second;

    (*second).data = 20;
    (*second).next = third;

    (*third).data = 30;
    (*third).next = fourth;

    fourth->data = 40;
    fourth->next = NULL;

    printf("linked list traversal\n");
    linkedListTraversal(head);

    printf("reverse linked list\n");
    head = reverse(head);

    printf("linked list traversal\n");
    linkedListTraversal(head);
}