#include<stdio.h>

void main()
{
    int i, fact=1,end;
    printf("enter the end value:");
    scanf("%d",&end);

    i = end;

    while (i>=1)
    {
        fact = fact * i;
        printf("%d\n",i);
        i--;
    }
    printf("factorial of %d is %d:",end,fact);
    
}