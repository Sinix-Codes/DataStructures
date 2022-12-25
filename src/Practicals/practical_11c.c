// doubly linked list
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
    struct node*prev;
};

struct node*head;

void display()
{
    struct node*p=head;
    while (p!=NULL)
    {
        printf(" %d -> ",p->data);
        p=p->next;
    }
    printf("End\n");
}


void insertAtend()
{
    struct node*p=head;
    struct node*newnode=(struct node*)malloc(sizeof(struct node));

    printf("\nEnter data to insert at end: ");
    scanf("%d",&(newnode->data));
    newnode->next = NULL;

    if(head == NULL)
    {
        head = newnode;
    }
    while (p->next!=NULL)
    {
        p=p->next;
    }
    p->next=newnode;

    printf("\nLinked list after insertion at end :");
    display();
}

void insertAtbeg()
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node));

    printf("\nEnter data to insert at beginning: ");
    scanf("%d",&(newnode->data));

    if(head == NULL)
    {
        head = newnode;
        newnode->next = NULL;
    }
    
    newnode->next = head;
    head = newnode;

    printf("\nLinked list after insertion of head node :");
    display();
}

void insertBefore()
{
    int key;
    struct node*p;
    struct node*p1=head;

    p = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter node to insert before it : ");
    scanf("%d",&key);

    printf("\nEnter element to insert : ");
    scanf("%d",&(p->data));

    while (p1->next->data!=key && p1->next!=NULL)
    {
        p1=p1->next;
    }
    p->next=p1->next;
    p1->next=p;
    
    printf("\nInsert before :");
    display();
}
void insertAfter()
{
    int key;
    struct node*p;
    struct node*p1=head;

    p = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter node to insert after it : ");
    scanf("%d",&key);

    printf("\nEnter element to insert : ");
    scanf("%d",&(p->data));

    while (p1->data!=key && p1->next!=NULL)
    {
        p1=p1->next;
    }
    p->next=p1->next;
    p1->next=p;
    
    printf("\nInsert after :");
    display();
}

void deleteAtbeg()
{
    struct node*p;

    if(head == NULL)
    {
        printf("\nLinked list is empty!");
        return;
    }
    else
    {
        p = head;
        head = head->next;
        free(p);
    }
    printf("\nLinked list after deletion of head node : ");
    display();
}

void deleteAtend()
{
    struct node*p;
    struct node*p1=head;

    while (p1->next!=NULL)
    {
        p=p1;
        p1=p1->next;
    }
    p->next = p1->next;
    free(p1);
    printf("\nLinked list after deletion of at end :");
    display();
}

int main(){
    int num;
    
    printf("\nEnter number of nodes : ");
    scanf("%d",&num);

    for (int i = 0; i < num; i++)
    {
        struct node*p = (struct node*)malloc(sizeof(struct node));
        printf("\nEnter data : ");
        scanf("%d",&(p->data));
        p->next = NULL;
        p->prev = NULL;

        if (head == NULL)
        {
            head = p;
        }
        else
        {
            struct node*temp=head;
            while (temp->next != NULL)
            {
                temp=temp->next;
            }
            temp->next=p;
            p->prev=temp;
        }
    }
    display();
 
    return 0;
}