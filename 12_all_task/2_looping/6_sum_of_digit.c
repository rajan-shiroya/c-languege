//WAP to find sum of all digit in a number.


#include<stdio.h>
void main()
{

    int num, temp;
    printf("Enter the number : ");
    scanf("%d",&num);

    temp = num;
    int sum = 0;

    while(temp>0)
    {
        sum = sum + (temp%10);
        temp = temp/10; 
    }
    printf("\nNum : %d",num);

    temp = sum;
    printf("\nSum of digits is: %d ",temp);


}