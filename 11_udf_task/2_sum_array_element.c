//C program to find sum of all array elements by passing array as an argument using UDF.

#include<stdio.h>

int sum(int arr[], int n)
{
    int i;
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum = arr[i] + sum; 
    }

    return sum;
    
}

void main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int arr[n];
    printf("\nEnter an elements: \n");

    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter an element at %d: ",i);
        scanf("%d",&arr[i]);
    }

    printf("\nArray is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    int a;
    a = sum(arr,n);
    printf("\nsum is: %d",a);
    
}