//UDF with array

#include<stdio.h>

int sum(int *ptr1, int *ptr2)
{
    return *ptr1 + *ptr2;
}

void main()
{
    int a,b;

    printf("Enter the value of a :");
    scanf("%d",&a);

    printf("\nEnter the value of b :");
    scanf("%d",&b);

    int *ptr1, *ptr2;
    ptr1 = &a;
    ptr2 = &b;

    int ans;
    ans = sum(ptr1, ptr2);
    printf("\nSum is: %d",ans);
}