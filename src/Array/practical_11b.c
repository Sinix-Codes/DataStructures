#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node{
    struct node*next;
    int data;
};

struct node*head;

void display()
{
    struct node*p=head;
    do{
        printf(" %d -> ",p->data);
        p=p->next;
    }while (p!=head);

    printf("End");
}

void insertAtBeg()
{
    struct node*p;
    struct node*p1=head;

    p = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter element to insert at beginning :");
    scanf("%d",&(p->data));

    if(head == NULL)
    {
        head = p;
        p->next = head;
    }
    else
    {
        while (p1->next!=head)
        {
            p1=p1->next;
        }
        p1->next=p;
        p->next = head;
        head =p;
    }
    display();
}
void insertAtEnd()
{
    struct node*p;
    struct node*p1=head;

    p = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter element to insert at End :");
    scanf("%d",&(p->data));

    if(head == NULL)
    {
        head = p;
        p->next = head;
    }
    else
    {
        while (p1->next!=head)
        {
            p1=p1->next;
        }
        p1->next=p;
        p->next = head;
    }
    display();
}

int main(){
    int num;
    struct node*p;
    printf("\nEnter number of nodes : ");
    scanf("%d",&num);

    head = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter data of head: ");
    scanf("%d",&(head->data));

    if (head == NULL)
    {
        head = p;
        p->next=head;
    }
    p=head;
    

    for (int i = 1; i < num; i++)
    {
        p->next = (struct node*)malloc(sizeof(struct node));
        p=p->next;

        printf("\nEnter data : ");
        scanf("%d",&(p->data));
        p->next=head;
    }
    display();
    insertAtBeg();
    insertAtEnd();
    return 0;
}