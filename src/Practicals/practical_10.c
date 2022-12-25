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
    printf("\n\tNumber of nodes : %d\n\n",count);
}

void search()
{
    int flag=0,key;
    printf("\nEnter element to find in linked list :");
    scanf("%d",&key);

    struct node*p=head;
    while(p!=NULL)
    {
        if(p->data == key)
        {
            flag = 1;
            break;
        }
        p=p->next;
    }
    if (flag == 1)
    {
        printf("\nElement found in linked list (●'◡'●)");
    }
    else
    {
        printf("\nElement not found in linked list !!  ＞﹏＜");
    }
    
}

void searchS()
{
    int flag=0,key;
    printf("\nEnter element to find in linked list :");
    scanf("%d",&key);

    struct node*p=head;
    while(p!=NULL)
    {
        if(p->data == key)
        {
            flag = 1;
            break;
        }
        else if (p->data > key)
        {
            break;
        }
        
        p=p->next;
    }
    if (flag == 1)
    {
        printf("\nElement found in linked list (●'◡'●)");
    }
    else
    {
        printf("\nElement not found in linked list !!  ＞﹏＜");
    }
}

void searchSorted()
{
    struct node*p=head;
    if (head == NULL)
    {
        printf("\nLinked list is empty!");
        return;
    }
    else
    {
        int temp;
        struct node*p=head;
        struct node*ind;
        while (p!=NULL)
        {
            ind = p->next;
            while (ind!=NULL)
            {
                if (p->data > ind->data)
                {
                    temp = p->data;
                    p->data = ind->data;
                    ind->data = temp;
                }
                ind=ind->next;
            }
            p=p->next;
        }
    }
    display();

    searchS();
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
    // search();
    searchSorted();
    return 0;
}