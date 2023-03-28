//Array with pointer

#include<stdio.h>
void main()
{
    int arr[5]={1,2,3,4,5};
    int *ptr1[5];
    int i;

    for(i=0;i<=4;i++)
    {
        ptr1[i] = &arr[i];
    }

    for(i=0;i<=4;i++)
    {
        printf("%d ",*ptr1[i]);
    }


}