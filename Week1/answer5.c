#include<stdio.h>
void main()
{
    float r,dia,pmtr,area;
    printf("enter the radius of a circle");
    scanf("%f",&r);
    dia=2*r;
    pmtr=3.14*2*r;
    area=3.14*r*r;
    printf("the diameter of circle is %f",dia);
    printf("the circumferrence of circle is %f",pmtr);
    printf("the area of circle is %f",area);
    

}