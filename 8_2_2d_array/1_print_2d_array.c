//WAP to get & print 2D array of N element

#include<stdio.h>
void main()
{
    int n;
    printf("enter the value of rows and columns: ");
    scanf("%d",&n);

    int array[n][n];
    int i,j;


    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enter element at [%d][%d]: ",i,j);
            scanf("%d",&array[i][j]);
        }
        printf("\n");
    }

    printf("array is....\n");
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
}