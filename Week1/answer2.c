#include<stdio.h>
void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(n>0)
    {
    printf("positive",n);
    }
    else if(n<0)
    {
    printf("negative",n);
    }
    else
    {
    printf("zero",n);
    }
}

