#include<stdio.h>


void main()
{
    int a,b,c;
    printf("Enter the value of a:-");
    scanf("%d",&a);
    printf("a = %d",a);
    printf("\n1Enter the value of b:-");
    scanf("%d",&b);
    printf("b = %d",b);
    c = a;
    a = b;
    b = c;
    printf("\nafter swapping:\na = %d",a);
    printf("\nb = %d",b);

}