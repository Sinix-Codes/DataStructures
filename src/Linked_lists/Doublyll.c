// doubly linked list implementation

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;

void insert(int x)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
    temp->prev = NULL;
    if (head == NULL)
    {
        head = temp;
        return;
    }
    struct node *temp1 = head;
    while (temp1->next != NULL)
    {
        temp1 = temp1->next;
    }
    temp1->next = temp;
    temp->prev = temp1;
}

void delete (int n)
{
    struct node *temp = head;
    if (n == 1)
    {
        head = temp->next;
        free(temp);
        return;
    }
    int i;
    for (i = 0; i < n - 2; i++)
    {
        temp = temp->next;
    }
    struct node *temp1 = temp->next;
    temp->next = temp1->next;
    free(temp1);
}

void print()
{
    struct node *temp = head;
    printf("\nList: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    insert(2);
    insert(4);
    insert(6);
    insert(5);
    print();
    int n;
    printf("\nEnter a position: ");
    scanf("%d", &n);
    delete (n);
    print();
    return 0;
}
