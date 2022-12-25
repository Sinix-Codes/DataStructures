//Tower of hanoi🗼
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

towerofhanoi(int discs,char beg,char aux,char end)
{
    if(discs>0)
    {
        towerofhanoi(discs-1,beg,end,aux);
        printf("\n\tMove %c -> %c",beg,end);
        towerofhanoi(discs-1,aux,beg,end);
    }
}

int fact(int n)
{
    if (n==0 || n==1)
    {
        return 1;
    }
    return n*fact(n-1);
}

int fib(int n)
{
    if(n == 0 || n == 1)
    {
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    int discs;
    printf("\nEnter number of discs : ");
    scanf("%d",&discs);
    // towerofhanoi(discs,'A','B','C');

    // printf("\nFactorial of %d = %d",discs,fact(discs));

    for(int i =0;i<=discs;i++)
        printf("%d  ",fib(i));
    return 0;
}