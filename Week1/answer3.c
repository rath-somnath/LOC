#include<stdio.h>
void main()
{
    int n,r,sum=0;
    printf("enter a digit:");
    scanf("%d",&n);
    do
    {
        r=n%10;
        sum+=r;
        n/=10;
    }
    while(n!=0);
    {
        printf("the sum of digits:%d",sum);
    }

}