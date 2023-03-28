// print and find sum of inner elements of 5*s array

#include<stdio.h>
void main()
{
    int i,j, array[5][5];

    printf("Enter elements in 5*5 array...\n");

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("Enter element at position[%d][%d]: ",i,j);
            scanf("%d",&array[i][j]);
        }
        printf("\n");
    }


    printf("\nArray is...\n");
    
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }


    printf("\nSum of inner elements is...");
    int sum=0;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i>=1 && i<4 && j>=1 && j<4)
            {
                sum = sum + array[i][j];
            }
        }
    }

printf("%d",sum);

}
