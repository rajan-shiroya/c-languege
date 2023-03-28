//WAP to find cube of given no using UDF.

#include<stdio.h>

cube(int n)
{
    int cube_n;
    cube_n = n * n * n;
    printf("\nCube is: %d",cube_n);
}

void main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    cube(n);
}