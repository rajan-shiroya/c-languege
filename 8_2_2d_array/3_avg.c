//average of 2D array


#include<stdio.h>
void main()
{
    int n;
    printf("enter the value of rows and columns: ");
    scanf("%d",&n);

    int array[n][n];
    int i,j, len=0;


    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enter element at [%d][%d]: ",i,j);
            scanf("%d",&array[i][j]);
            len++;
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

    int sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            sum = sum + array[i][j];
        }
    }
    
    printf("\nSum is : %d ",sum);
    printf("\nNo. of elements are:%d ",len);
    printf("\naverage of elements is : %d",sum/len);
}