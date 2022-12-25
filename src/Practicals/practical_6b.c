#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node
{
    struct node*next;
    int data;
};

struct node*head;
int top=-1;
int size;

void display()
{
    struct node*p=head;
    if(head == NULL)
    {
        printf("\nStack Underflow!");
    }
    else
    {
        printf("\nStart ");
        while(p->next!=NULL)
        {
            printf("->%d ",p->data);
            p=p->next;
        }
    }
}

void push()
{
    struct node*p = (struct node*)malloc(sizeof(struct node));
    p->next=NULL;
    struct node*p1=head;
    
    if (top != size-1)
    {
        printf("\nEnter data to insert :");
        scanf("%d",&p->data);

        if(head==NULL)
        {
            head=p;
        }
        while (p1->next!=NULL)
        {
            p1=p1->next;
        }
        p1->next = p;
        display();
        top++;
    }
    else
    {
        printf("\nStack overflow !");
    }
}
void pop()
{
    struct node*p;
    struct node*p1=head;
    
    if(head == NULL)
    {
        printf("\nStack Underflow !");
    }
    else{
        while (p1->next!=NULL)
        {
            p=p1;
            p1=p1->next;
        }
        p->next = p1->next;
        free(p1);
        top--;
        display();
    }
    
   
}

int main(){
    int num,choice;
    struct node*p;
    head = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter how many numbers you want to push : ");
    scanf("%d",&num);
    if (head == NULL)
    {
        head = p;
        p->next=NULL;
        top++;
    }
    p=head;
    for (int i = 1; i < num; i++)
    {
        p->next = (struct node*)malloc(sizeof(struct node));
        p=p->next;
        printf("\nEnter data to push : ");
        scanf("%d",&(p->data));
        p->next = NULL;
        top++;
    }
    
    while (1)
    {
        printf("\nEnter which operation you want to perform : \n1] Push\n2] POP\n3] Display\n4] EXIT");
        scanf("%d",&choice);
    
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
        default:
            break;
        }
    }
    


    return 0;
}