//WAP to count frequency of each element in an array


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

    int count=0;
    

}