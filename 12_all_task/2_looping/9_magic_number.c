//WAP to find magic number.


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

    int rev;
    while (temp > 0)
    {
        rev = (rev*10) + (temp%10);
        temp = temp/10;
    }
    
    printf("\nReverse number is: %d",rev);

    int multip;
    multip = sum * rev;

    printf("\nMultiplication is : %d",multip);

    if(multip == num)
    {
        printf("\n%d is magic number....",num);
    }
    else
    {
        printf("\n%d number is not a magic number....",num);
    }


}