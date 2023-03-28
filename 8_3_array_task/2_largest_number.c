//WAP to find largest number in array


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

    
    printf("\nLargest element is...\n");
    for(i=1;i<n;i++)
    {
        if(element[0]<=element[i])
        {
            element[0]=element[i];         
        }    
        else
        {
            element[0]==element[0];
        }  
    }
       printf("%d ",element[0]);
}