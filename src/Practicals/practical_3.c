#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int arr1[10][10],arr2[10][10],add[10][10],sub[10][10],mul[10][10],r,c,r1,c1,r2,c2;

void addition()
{
    printf("\nEnter limit of row : ");
    scanf("%d",&r);
    printf("\nEnter limit of column : ");
    scanf("%d",&c);

    printf("\nEnter the array 1: ");
    for(int i=0;i<r;i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("\narr1[%d][%d] = ",i,j);
            scanf("%d",&(arr1[i][j]));
        }
    }

    printf("\nEnter the array 2: ");
    for(int i=0;i<r;i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("\narr2[%d][%d] = ",i,j);
            scanf("%d",&(arr2[i][j]));
        }
        
    }

    printf("\nSum of two arrays : ");
    for(int i=0;i<r;i++)
    {
        for (int j = 0; j < c; j++)
        {
            add[i][j]=arr1[i][j]+arr2[i][j];
            printf("\nAdd[%d][%d] = %d",i,j,add[i][j]);
        }
        
    }
}
void subtraction()
{
    printf("\nEnter limit of row : ");
    scanf("%d",&r);
    printf("\nEnter limit of column : ");
    scanf("%d",&c);

    printf("\nEnter the array 1: ");
    for(int i=0;i<r;i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("\narr1[%d][%d] = ",i,j);
            scanf("%d",&(arr1[i][j]));
        }
    }

    printf("\nEnter the array 2: ");
    for(int i=0;i<r;i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("\narr2[%d][%d] = ",i,j);
            scanf("%d",&(arr2[i][j]));
        }
        
    }

    printf("\nSubtraction of two arrays : ");
    for(int i=0;i<r;i++)
    {
        for (int j = 0; j < c; j++)
        {
            add[i][j]=arr1[i][j]-arr2[i][j];
            printf("\nSub[%d][%d] = %d",i,j,sub[i][j]);
        }
        
    }
}


void multiplication()
{
    again:
    printf("\nEnter limit of row of array 1: ");
    scanf("%d",&r1);
    printf("\nEnter limit of column of array 1 : ");
    scanf("%d",&c1);

    printf("\n\nEnter limit of row of array 2: ");
    scanf("%d",&r2);
    printf("\nEnter limit of column of array 2 : ");
    scanf("%d",&c2);

    if(c1!=r2)
    {
        printf("\n\tMultiplication not possible!");
        goto again;
    }

    printf("\nEnter the array 1: ");
    for(int i=0;i<r1;i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("\narr1[%d][%d] = ",i,j);
            scanf("%d",&(arr1[i][j]));
        }
    }

    printf("\nEnter the array 2: ");
    for(int i=0;i<r2;i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("\narr2[%d][%d] = ",i,j);
            scanf("%d",&(arr2[i][j]));
        }
        
    }

   
   for (int i = 0; i < r1; i++)
   {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                mul[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
   }
   printf("\nMultiplication of two array : ");
   for (int i = 0; i < r1; i++)
   {
    for (int j = 0; j < c2; j++)
    {
        printf("\nMul[%d][%d] = %d",i,j,mul[i][j]);
    }
   }
}


int main(){
int choice;
while(1)
{
    printf("\nEnter operation you want to perform : \n1]Addition\n2]Subtraction\n3]Multiplication\n4]EXIT\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        addition();
        break;
    case 2:
        subtraction();
        break;
    case 3:
        multiplication();
        break;
    case 4:
        exit(1);
        break;
    default:
        printf("\nInvalid choice");
        break;
    }
}
    return 0;
}