//column-wise sum of 2D array


#include<stdio.h>
void main()
{
    int n;
    printf("enter the value of rows and columns: ");
    scanf("%d",&n);
    printf("\n");

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

    printf("\nColumns wise sum is...");
    int sum;
    for(i=0;i<n;i++)
    {
        sum = 0;
        for(j=0;j<n;j++)
        { 
            sum = sum + array[j][i]; 
        }
        printf("\nSum of [%d] column in array is:%d ",i+1,sum);
       
    }


}