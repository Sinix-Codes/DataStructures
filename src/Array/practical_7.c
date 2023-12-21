#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int *queue,front=-1,rear=-1,size;

void display(){
    int i;
    if(front == -1 && rear == -1)
    {
        printf("\nQueue is empty!");
    }
    else
    {
        if(front <= rear)
        {
            for (int i = front; i <= rear; i++)
            {
                printf(" %d",queue[i]);
            }
        }
        else
        {
            for (i = front; i < size; i++)
            {
                printf(" %d",queue[i]);
            }
            for (i = 0; i <= rear; i++)
            {
                printf(" %d",queue[i]);
            }   
        }   
    }
}

void enqueue()
{
    int ele;
    if ((front == 0 && rear == size-1) || (front==rear+1))
    {
        printf("\nQueue overflow!");
        return;
    }
    else
    {
        if (front==-1 && rear==-1)
        {
            front++;
            rear++;
        }
        else if (rear == size-1)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        printf("\nEnter element to enqueue : ");
        scanf("%d",&ele);
        queue[rear]=ele;
        display();
    }
}

void deque()
{
    if (front==-1 && rear==-1)
    {
        printf("\nQueue underflow !");
        return;
    }
    else
    {
        if (front == rear)
        {
            printf("%d is dequed !",queue[front]);
            front =-1;
            rear=-1;
        }
        else if(front == size-1)
        {
            printf("%d is dequed !",queue[front]);
            front = 0;
            return;
        }
        else
        {
            printf("%d is dequed !",queue[front]);
            front++;
        }
        display();
    }
}


int main(){
    int choice;
    printf("\nEnter size of queue:");
    scanf("%d",&size);

    queue = (int*)malloc(sizeof(int)*size);

    while(1)
    {
        printf("\nEnter choice :\n1]enqueue\n2]deque\n3]display\n4]EXIT");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            deque();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("\nInvalid choice !");
            break;
        }
    }
    return 0;
}
