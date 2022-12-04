// Implement Queue using Linked List

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue(int x)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
    if (front == NULL && rear == NULL)
    {
        front = rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}

void dequeue()
{
    struct node *temp = front;
    if (front == NULL)
    {
        printf("Queue is Empty ");
        return;
    }
    if (front == rear)
    {
        front = rear = NULL;
    }
    else
    {
        front = front->next;
    }
    free(temp);
}

int Front()
{
    if (front == NULL)
    {
        printf("Queue is empty ");
        return -1;
    }
    return front->data;
}

void Print()
{
    struct node *temp = front;
    printf("\nQueue: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    printf("\nEnter Operation to perform : ");
    printf("\n1. Enqueue 2. Dequeue 3. Front 4. Print 5. Exit");
    int op;
    scanf("%d", &op);

    while (op != 5)
    {
        if (op == 1)
        {
            int x;
            printf("\nEnter element to enqueue : ");
            scanf("%d", &x);
            enqueue(x);
        }
        else if (op == 2)
        {
            dequeue();
        }
        else if (op == 3)
        {
            printf("\nFront element is %d ", Front());
        }
        else if (op == 4)
        {
            Print();
        }
        else
        {
            printf("\nInvalid Operation ");
        }
        printf("");
        printf("\nEnter Operation to perform : ");
        printf("\n1. Enqueue 2. Dequeue 3. Front 4. Print 5. Exit");
        scanf("\n%d", &op);
    }

    printf("\nFront element is %d ", Front());
    return 0;
}
