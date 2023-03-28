#include<stdio.h>


void main()
{
    int a,b,cube;
    printf("Enter the value of a:-");
    scanf("%d",&a);

    printf("\nEnter the value of b:-");
    scanf("%d",&b);

    cube = (a*a*a) + (3*a*a*b + 3*a*b*b)+(b*b*b);
    printf("cube is:-%d",cube);



}