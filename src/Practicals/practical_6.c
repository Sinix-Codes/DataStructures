#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int *stack,top=-1,size;

void push()
{
    if(top>=size)
    {
        printf("\nStack overflow!");
        return;
    }
    else
    {
        int ele;
        printf("\nEnter element to push : ");
        scanf("%d",&ele);
        
        stack[++top]=ele;
    }
}

void pop()
{
    if(top<=-1)
    {
        printf("\nStack underflow !");
        return;
    }
    else
    {
        printf("%d is poped !",stack[top]);
        top--;
    }
    
}

void display()
{
    for (int i = top; i > -1; i--)
    {
        printf("\n%d",stack[i]);
    }
    
}

int main(){
    int choice;
    printf("\nEnter size of stack : ");
    scanf("%d",&size);

    stack = (int*)malloc(sizeof(int)*size);
    while (1)
    {
        printf("\nEnter choice : \n1]push\n2]pop\n3]display\n4]EXIT\n");
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
            break;
        default:
            printf("\nEnter valid choice!");
            break;
        }    
    }
    
    return 0;
}