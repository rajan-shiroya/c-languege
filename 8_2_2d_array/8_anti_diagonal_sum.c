// anti-diagonal sum of 2d array

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

    printf("\nAnti-diagonal sum is...");
    int sum=0;
    for(i=0;i<n;i++)
    {     
        for(j=0;j<n;j++)
        { 
            if((i+j)==2)
            {
            sum = sum + array[i][j];
            } 
        }           
    }
      printf("\nSum is:%d ",sum);

}