//WAP to swap 2 var. without using 3rd var.

#include<stdio.h>


void main()
{
    int a,b;
    printf("Enter the value of a:-");
    scanf("%d",&a);
    printf("a = %d",a);
    printf("\nenter the value of b:-");
    scanf("%d",&b);
    printf("b = %d",b);
    a = a + b;
    b = a - b;
    a = a - b; 
    printf("\nafter swapping:\na = %d",a);
    printf("\nb = %d",b);

}