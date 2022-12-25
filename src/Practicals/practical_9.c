#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};

struct node*head;

void display()
{
    struct node*p=head;
    while(p!=NULL)
    {
        printf("%d->",p->data);
        p=p->next;
    }
    printf("End");
}

void count()
{
    int count=0;
    struct node*p=head;
    while (p!=NULL)
    {
        count++;
        p=p->next;
    }
    printf("\n\tNumber of nodes : %d",count);
}

int main(){
    struct node*p;
    int size;
    
    head = (struct node*)malloc(sizeof(struct node));
    head->next = NULL;

    printf("\nEnter number of nodes you want :");
    scanf("%d",&size);  

    printf("\nEnter data of head :");
    scanf("%d",&(head->data));

    p=head;

    for (int i = 1; i < size; i++)
    {
        p->next = (struct node*)malloc(sizeof(struct node));
        p=p->next;

        printf("\nEnter data : ");
        scanf("%d",&(p->data));

        p->next = NULL;
    }
    display();
    count();
    return 0;
}