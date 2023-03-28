#include<stdio.h>

void main()
{
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);

    int element[n],i, sum = 0;

    for(i=0;i<n;i++)
    {
        printf("enter the element :");
        scanf("%d",&element[i]);
       
    }

    for(i=0;i<n;i++)
    {
        sum = sum + element[i];
    }
    printf("sum is : %d ",sum);
    printf("\naverage of elements is : %d",sum/n);
}