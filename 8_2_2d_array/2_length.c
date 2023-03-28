//WAP to find length of 2D array

#include<stdio.h>
void main()
{
    int n;
    printf("Enter the no. of rows and columns: ");
    scanf("%d",&n);

    int arr[n][n], i, j, len=0;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter element at[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
            len++;
        }
        printf("\n");
    }


    printf("Array is...\n");
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("\nLength of array is: %d",len);


}