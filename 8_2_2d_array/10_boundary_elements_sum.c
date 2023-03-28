// print and find sum of all boundary elements of 5*5 array

#include<stdio.h>
void main()
{
    int i,j, array[5][5]={{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};

    // printf("Enter elements in 5*5 array...\n");

    // for(i=0;i<5;i++)
    // {
    //     for(j=0;j<5;j++)
    //     {
    //         printf("Enter element at position[%d][%d]: ",i,j);
    //         scanf("%d",&array[i][j]);
    //     }
    //     printf("\n");
    // }


    printf("\nArray is...\n");
    
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }


    printf("\nSum of boundary elements is...");
    int sum=0;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==0 || j==0 || i==4 || j==4)
            {
                sum = sum + array[i][j];
            }
        }
    }

printf("%d",sum);

}
