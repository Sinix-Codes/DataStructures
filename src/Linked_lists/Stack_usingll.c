// Implementing Stack using Linked List 🔗🔗

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

void push(int x)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = top;
    top = newnode;
}

void pop()
{
    if (top == NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        struct node *temp = top;
        top = top->next;
        free(temp);
    }
}

void display()
{
    struct node *temp = top;
    while (temp != NULL)
    {
        printf("%d \n", temp->data);
        temp = temp->next;
    }
}

int main()
{
    printf("Enter Which operation you want to perform : ");
    printf(" 1. Push 2. Pop 3. Display 4. Exit ");
    int choice;
    scanf("%d", &choice);

    while (choice != 4)
    {
        switch (choice)
        {
        case 1:
            printf("Enter the element you want to push : ");
            int x;
            scanf("%d", &x);
            push(x);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            printf("Invalid Choice");
            break;
        }
        printf(" 1. Push 2. Pop 3. Display 4. Exit ");
        scanf("%d", &choice);
    }
    return 0;
}