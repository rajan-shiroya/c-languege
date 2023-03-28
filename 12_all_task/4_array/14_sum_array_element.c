//WAP to find sum of all array element

#include<stdio.h>

void main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);

    int element[n],i, sum = 0;

    for(i=0;i<n;i++)
    {
        printf("Enter the element :");
        scanf("%d",&element[i]);
       
    }

    printf("Array is...\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",element[i]);
         
    }

    for(i=0;i<n;i++)
    {
        sum = sum + element[i];
    }
    printf("\nSum is : %d ",sum);
   
}