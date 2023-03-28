//addition of 1D array and store it into another array

#include<stdio.h>
void main()
{
    int n;
    printf("enter the size of both array: - ");
    scanf("%d",&n);

    int i, first[n], second[n], result[n];

    for(i=0;i<n;i++)
    {
        printf("enter first array element : ");
        scanf("%d", &first[i]);
    }

    printf("\n");

    for(i=0;i<n;i++)
    {
        printf("enter second array element : ");
        scanf("%d", &second[i]);
    }


    for(i=0;i<n;i++)
    {
        result[i] = first[i] + second[i];
    }

    printf("\n");
    printf("final array elements are...\n");

    for(i=0;i<n;i++)
    {
    printf("%d, ",result[i]);
    }

}