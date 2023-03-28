//WAP to swap 2 variable using UDF.

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

// int swap_b(int arr[],int a,int b)
// {
   
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     return b;

// }

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
    

    // int b1;
    // b1 = swap_a(arr,a,b);
    // printf("\nAfter swapping b is: %d",b1);

    
}