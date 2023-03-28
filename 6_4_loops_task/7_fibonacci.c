// fibonacii series (0,1,1,2,3,5,8,...)

#include<stdio.h>

void main()
{
    int n;
    printf("enter the last number: ");
    scanf("%d",&n);

    int first = 0, second = 1, third;

    printf("\nfibonacci series is : %d, %d ",first, second);
    third = first + second;

    while(third<=n)
    {
        printf(", %d",third);
        first = second;
        second = third;
        third = first + second;
    }

}

