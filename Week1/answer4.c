#include<stdio.h>
void main()
{
    int a,b,s=0,d=0,m=0,di=0,mo=0,o;
    printf("select operator you want to perform\n1-addition\n2-substraction\n3-multiplication\n4-division\n5=modulus");
    printf("\nselect operator(1/2/3/4/5)");
    scanf("%d",&o);
    printf("enter two number");
    scanf("%d %d",&a,&b);
    switch(o)
    {
        case 1:
        s=a+b;
        printf("the sum of %d and %d  is %d",a,b,s);
        break;

        case 2:
        d=a-b;
        printf("the diffirence of %d and %d is %d",a,b,d);
        break;
        
        case 3:
        m=a*b;
        printf("the multiplication of %d and %d is %d",a,b,m);
        break;
        
        case 4:
        di=a/b;
        printf("the division  of %d and %d is %d",a,b,di);
        break;

        case 5:
        mo=a%b;
        printf("the modulus of %d and %d is %d",a,b,mo);
        break;

        default:
        printf("invalid input");
    


    }
}