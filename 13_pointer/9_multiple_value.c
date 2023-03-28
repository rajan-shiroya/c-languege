//WAP to return multiple value from function using pointer.

#include<stdio.h>

int swap_a(int arr[],int a,int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    arr[0] = a;
    arr[1] = b;
    return arr;

}

void main()
{
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("\nEnter the value of b: ");
    scanf("%d",&b);
    
    int arr[2];

    int a1;
    a1 = swap_a(arr,a,b);
    printf("\nAfter swapping a is: %d",arr[0]);
    printf("\nAfter swapping b is: %d",arr[1]);

    
}