//merging of 1D array 

#include<stdio.h>
void main()
{
    int n;
    printf("enter the size of first array: - ");
    scanf("%d",&n);

    int first[n], i;

    printf("enter first array element: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&first[i]);
 
    }



    int m;
    printf("\nenter the size of second array: ");
    scanf("%d",&m);

    int second[m],j;

    printf("enter second array element: \n");
    for(j=0;j<m;j++)
    {
        scanf("%d",&second[j]);
    }

    int k;
    k= n + m;
    printf("final array size is: %d", k);

    int merge[k];
    first[i] = merge[k];
    printf("\nafter merging array is: %d",merge[k]);


}