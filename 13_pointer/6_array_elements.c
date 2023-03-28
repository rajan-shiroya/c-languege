//C program to input and print array elements using pointers.

#include<stdio.h>
void main()
{
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);

    int arr[n];

    printf("\nEnter elements in array...\n");

    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter element at [%d] position: ",i);
        scanf("%d",&arr[i]);
    }


    int *ptr[n];

    for(i=0;i<n;i++)
    {
        ptr[i] = &arr[i];
    }


    printf("\nArray elements are...");
    for(i=0;i<n;i++)
    {
        printf("%d ",*ptr[i]);
    }

}