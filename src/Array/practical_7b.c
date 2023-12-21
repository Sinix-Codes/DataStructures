#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front;
int rear = -1;
int size;

void display()
{
    struct node *p = front;
    while (p != NULL)
    {
        printf(" %d -> ", p->data);
        p = p->next;
    }
    printf("End");
}

void enqueue()
{
    struct node *p;
    struct node *p1 = front;
    p = (struct node *)malloc(sizeof(struct node));
    if (rear != size)
    {

        printf("\nEnter data : ");
        scanf("%d", &(p->data));
        p->next = NULL;

        if (front == NULL)
        {
            front = p;
        }
        else
        {
            while (p1->next != NULL)
            {
                p1 = p1->next;
            }
            p1->next = p;
        }
        display();
        rear++;
    }
    else
    {
        printf("\n\nQueue overflow!");
    }
}

void dequeue()
{
    struct node*p=front;
    if(front == NULL)
    {
        printf("\nQueue underflow!");
    }
    else{
        front = front->next;
        printf("\nElement deleted = %d\n",p->data);
        free(p);
        rear--;
    }
    display();
}

int main()
{
    int choice;
    struct node *p;
    printf("\nEnter the size of queue : ");
    scanf("%d", &size);
    rear = size;
    front = (struct node *)malloc(sizeof(struct node));

    printf("\nEnter data :");
    scanf("%d", &(front->data));
   

    p = front;
    for (int i = 1; i < size; i++)
    {
        p->next = (struct node *)malloc(sizeof(struct node));
        p = p->next;
        printf("\nEnter data : ");
        scanf("%d", &(p->data));
        p->next = NULL;

    }
    display();

    while (1)
    {
        printf("\nEnter choice : \n1] enqueue\n2] dequeue\n3] EXIT");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            exit(1);
            break;
        default:
            printf("\nEnter valid option ");
            break;
        }
    }
    return 0;
}