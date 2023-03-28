//C program to swap two numbers using pointers without using third var.

#include<stdio.h>
void main()
{
    int a,b;

    printf("Enter the value of a: ");
    scanf("%d",&a);

    printf("\nEnter the value of b: ");
    scanf("%d",&b);

    int *ptr1, *ptr2;
    ptr1 = &a;
    ptr2 = &b;

    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;


    printf("\nAfter swapping a is: %d",*ptr1);
    printf("\nAfter swapping b is: %d",*ptr2);
    
}