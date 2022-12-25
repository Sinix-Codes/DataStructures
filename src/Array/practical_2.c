#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int n,*arr,ele,i;



void insert()
{
   int pos;
    again :
    printf("\nEnter position to insert element :");
    scanf("%d",&pos);

    if(pos>n+1)
    {
        printf("\nInvalid position !");
        goto again;
    }

    printf("\nEnter element to insert at pos :");
    scanf("%d",&ele);

    for(i = n-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=ele;
    
    printf("\n====================================");
    printf("\nArray after insertion : ");
    for ( i = 0; i <= n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}

void Adelete()
{
   int pos;
    again :
    printf("\nEnter position to delete element :");
    scanf("%d",&pos);

    if(pos>n+1)
    {
        printf("\nInvalid position !");
        goto again;
    }

    for(i = pos-1;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    
    printf("\n====================================");
    printf("\nArray after deletion : ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}
int main(){
    
    printf("Enter size of array :");
    scanf("%d",&n);

    arr = (int*)malloc(n*sizeof(int));

    for (i = 0; i < n; i++)
    {
        printf("\nEnter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    insert();

    Adelete();
    return 0;
}