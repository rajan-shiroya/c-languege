//WAP to print all negative elements in array

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

    printf("elements are...\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",element[i]);
    }

    
    printf("\nNegatives elements are...\n");
    for(i=0;i<n;i++)
    {
        if(element[i]<0)
        {
            printf("%d ",element[i]);
        }
    }
}