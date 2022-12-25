#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int *arr,size,i;

void linearsearch()
{
    int key,flag=0;
    printf("\nEnter element to search : ");
    scanf("%d",&key);

    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
            printf("\nElement found!");
            return;
        }
    }
    printf("\nElement not found !");
    
}


void binarysearch()
{
    int beg=0,mid,end=size-1,key;
    printf("\nEnter element to search : ");
    scanf("%d",&key);

    while(beg<=end)
    {
        mid = (beg + end)/2;
        if (arr[mid]==key)
        {
            printf("Element found!");
            return;
        }
        else if (arr[mid]>key)
        {
            end = mid-1;
        }
        else
        {
            beg = mid+1;
        }
    }
    printf("\nElement not found !!");
}


int main(){
    printf("Enter size of array : ");
    scanf("%d",&size);

    arr = (int*)malloc(sizeof(int));

    for ( i = 0; i < size; i++)
    {
        printf("\nEnter arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    linearsearch();
        
    binarysearch();
    return 0;
}