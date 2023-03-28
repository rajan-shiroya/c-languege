//Find length of number of given string in 2D character array

#include<stdio.h>
void main()
{
    int n;
    printf("Enter the no. of rows and columns: ");
    scanf("%d",&n);

    int  i, j, len=0;
    char arr[n][n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter element at[%d][%d]: ",i,j);
            scanf("%c",&arr[i][j]);
            len++;
        }
        printf("\n");
    }


    printf("Array is...\n");
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%c ",arr[i][j]);
        }
        printf("\n");
    }

    printf("\nLength of array is: %d",len);


}