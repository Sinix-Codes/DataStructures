#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int *arr,size,i,j;

void display(){
    int i;
    printf("{");
    for(i = 0;i<size;i++)
    {
        printf(" %d",arr[i]);
    }
    printf("}");
}

void bubblesort()
{
    int temp;
    for ( i = 0; i < size-1; i++)
    {
        for ( j = 0; j < size-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    display();
}


void selectionsort()
{
    int min,temp;
    for ( i = 0; i < size-1; i++)
    {
        min = i;
        for ( j = i+1; j < size; j++)
        {
            if(arr[j]<arr[min])
            {
             temp = arr[j];
             arr[j]=arr[min];
             arr[min]=temp;   
            }
        }
    }
    display();
}

void insertionsort()
{
    int current;
    for ( i = 0; i < size; i++)
    {
        current = arr[i];
        j=i-1;
        while (j>=0 && arr[j]>current)
        {
             arr[j+1] = arr[j];
             j--;
        }
        arr[j+1]=current;
    }
    display();
}


void shellsort()
{
    int current,gap;
    for (gap = size/2; gap > 0 ; gap/=2)
    {
        for (i = gap; i < size; i++)
        {
            current = arr[i];
            j=i;
            while(j>=gap && arr[j-gap]>current)
            {
                arr[j]=arr[j-gap];
                j-=gap;
            }
            arr[j]=current;
        }
    }
    display();
}

int getmax()
{
    int max=arr[0];
    for (i = 1; i < size; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
    }
    return max;
}

void countsort(int div)
{
    int output[size];
    int count[10]={0};

    for ( i = 0; i < size; i++)
    {
        count[(arr[i]/div)%10]++;
    }

    for ( i = 1; i < 10; i++)
    {
        count[i]+=count[i-1];
    }

    for ( i = size-1; i >= 0; i--)
    {
        output[count[(arr[i]/div)%10]-1] = arr[i];
        count[(arr[i]/div)%10]--;
    }
    for ( i = 0; i < size; i++)
    {
        arr[i]=output[i];
    }
}

void radixsort()
{
    int m = getmax();
    for (int div = 1; m/div>0; div*=10)
    {
        countsort(div);
    }
    display();
}

void merge(int beg,int mid,int end)
{
    int *temp, i=beg,j=mid+1,index=beg,loc;

    temp = (int*)malloc((end+1)*sizeof(int));

    while ((i<=mid) && (j<=end))
    {
        if (arr[i]<arr[j])
        {
            temp[index] = arr[i];
            i++;index++;
        }
        else
        {
            temp[index] = arr[j];
            j++;index++;   
        }
    }
    while (i<=mid)
    {
            temp[index] = arr[i];
            i++;index++;
    }
    while (j<=end)
    {
            temp[index] = arr[j];
            j++;index++;
    }

    for ( loc = beg; loc < index; loc++)
    {
        arr[loc]=temp[loc];
    }
}

void mergesort(int beg,int end)
{
    int mid;
    if(beg<end)
    {
        mid=(beg+end)/2;
        mergesort(beg,mid);
        mergesort(mid+1,end);
        merge(beg,mid,end);
    }
}

int main(){
    printf("\nEnter no. of elements in array :");
    scanf("%d",&size);

    arr = (int*)malloc(sizeof(int)*size);

    printf("\nEnter your unsorted array :\n");
    for (int i = 0; i < size; i++)
    {
        printf("\nArr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    
    printf("\nBubble sort : ");
    bubblesort();
    printf("\nSelection sort : ");
    selectionsort();
    printf("\nInsertion sort : ");
    insertionsort();
    printf("\nShell sort : ");
    shellsort();
    printf("\nRadix sort : ");
    radixsort();
    printf("\nMerge sort : ");
    mergesort(0,size-1);
    display();
    
    return 0;
}