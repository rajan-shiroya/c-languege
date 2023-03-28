
#include<stdio.h>


void main()
{
    int a,b,c,cube;
    printf("Enter the value of a:-");
    scanf("%d",&a);

    printf("\nEnter the value of b:-");
    scanf("%d",&b);

    printf("\nEnter the value of c:-");
    scanf("%d",&c);

    cube = (a*a*a) + (b*b*b) + (c*c*c) + (3*a*2*b) +(3*a*2*c)+(3*b*2*c)+ (3*b*2*a)+( 3*c*2*a)+( 3*c*2*a)+(6*a*b*c);
    printf("cube is:-%d",cube);



}

//(a*a*a) + (b*b*b) + (c*c*c) + (3*a*2*b) +(3*a*2*c)+(3*b*2*c)+ (3*b*2*a)+( 3*c*2*a)+( 3*c*2*a)+(6*a*b*c)
