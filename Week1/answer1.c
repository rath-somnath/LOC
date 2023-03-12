#include<stdio.h>
void main()
{
    int i;
    for(i=1;i<=100;i++)
    if (i%3==0)
    {
     printf("fizz\n",i);
    }
    else if(i%5==0)
    {
     printf("buzz\n",i);  
    }
    else
    {
     printf("%d\n",i);   
    }
}