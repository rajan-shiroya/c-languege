//WAP to find addition of 2D array and store it into another.

#include<stdio.h>
void main()
{
    int n;
    printf("enter the value of rows and columns for Array1 and Array2: ");
    scanf("%d",&n);

    int array1[n][n], array2[n][n], result[n][n];
    int i,j;

    printf("\nEnter array1 elements...\n");
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enter element at [%d][%d]: ",i,j);
            scanf("%d",&array1[i][j]);
        }
        printf("\n");
    }


    printf("\nEnter array2 elements...\n");
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enter element at [%d][%d]: ",i,j);
            scanf("%d",&array2[i][j]);
        }
        printf("\n");
    }

    printf("array1 is....\n");
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",array1[i][j]);
        }
        printf("\n");
    }

    printf("\narray2 is....\n");
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",array2[i][j]);
        }
        printf("\n");
    }


    printf("\nAddition of array is...");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            result[i][j] = array1[i][j] + array2[i][j];
        }
        printf("\n");
    }
    

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

}