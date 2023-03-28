#include<stdio.h>
void main()
{
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);

    int element[n],i;

    for(i=0;i<n;i++)
    {
        printf("enter the element :");
        scanf("%d",&element[i]);
       
    }

    printf("elements are...\n");
    for(i=0;i<n;i++)
    {
    printf("%d ",element[i]);
    }
}