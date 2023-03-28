//C program to reverse an array using pointer.

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

    // int *rev_ptr[n];

    // int size = n;
    // for(i=0;i<n;i++)
    // {
    //     *rev_ptr[size-1] = *ptr[i];
    //     size--;
    // }

    // printf("\nReverse array elements are...");
    // for(i=0;i<n;i++)
    // {
    //     printf("%d ",*rev_ptr[i]);
    // }

    int n1 = n;
    int rev_arr[n1];
    int *rev_ptr[n1];
    
    for(i=0;i<n;i++)
    {
        rev_arr[n1-1] = arr[i];
        n1--;
    }

    for(i=0;i<n;i++)
    {
        rev_ptr[i] = &rev_arr[i];
    }

    printf("\nReverse array elements are...");
    for(i=0;i<n;i++)
    {
        printf("%d ",*rev_ptr[i]);
    }


}