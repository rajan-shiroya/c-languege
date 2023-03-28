
#include<stdio.h>
void main()
{
    int n;
    printf("enter no.of element: ");
    scanf("%d",&n);
    int i,arr[n],len=0;

    for(i=0;i<n;i++)
    {
    printf("enter element: ");
    scanf("%d",&arr[i]);
    len++;
    }

    printf("length is: %d ",len);
}
