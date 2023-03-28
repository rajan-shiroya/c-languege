//WAP to find square of each element using pointer.

#include<stdio.h>

void main()
{
    int a;
    printf("Enter any value: ");
    scanf("%d",&a);

    int *p;

    p = &a;
    // int square;
    // square = *p * *p;

    printf("\nSqaure is: %d",*p * *p);
}