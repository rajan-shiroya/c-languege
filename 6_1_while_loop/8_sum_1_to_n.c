#include<stdio.h>

void main()
{
    int i, sum=0, end;
    printf("enter the end value:");
    scanf("%d",&end);

    i = 1;

    while(i<=end)
    {
        sum = i + sum;
        printf("%d\n",i);
        i++;
        
    }
    printf("sum is:-%d",sum);

}