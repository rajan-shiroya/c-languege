//WAP to swap two variable using pointer.


#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);

    printf("Enter the value of b: ");
    scanf("%d",&b);

    int temp;
    int *p1;
    int *p2;
    int *t1;

    p1 = &a;
    p2 = &b;
    t1 = &temp;

    *t1 = *p1;
    *p1 = *p2;
    *p2 = *t1;


    printf("a is : %d",*p1); 
    printf("\nb is : %d",*p2);

}