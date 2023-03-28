//WAP to reverse given array and store it in an another array.

#include<stdio.h>
void main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);

    int element[n],i;

    for(i=0;i<n;i++)
    {
        printf("Enter the element :");
        scanf("%d",&element[i]);     
    }

    printf("Elements are...\n");
    for(i=0;i<n;i++)
    {
    printf("%d ",element[i]);
    }

    
    int n1 = n;
    int reverse_array[n1];

    for(i=0;i<n;i++)
    {
        reverse_array[n1-1] = element[i];
        n1--;
    }

    printf("\nAfter reverse array is...\n");
    for(i=0;i<n;i++)
    {
         printf("%d ",reverse_array[i]);
    }

}