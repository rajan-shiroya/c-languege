//check no is magic or not

#include<stdio.h>
void main()
{

    int num, temp;
    printf("enter the number : ");
    scanf("%d",&num);

    temp = num;
    int sum = 0;

    while(temp>0)
    {
        sum = sum + (temp%10);
        temp = temp/10; 
    }
    printf("\nnum : %d",num);

    temp = sum;
    printf("\nsum of digits is: %d ",temp);

    int rev;
    while (temp > 0)
    {
        rev = (rev*10) + (temp%10);
        temp = temp/10;
    }
    
    printf("\nreverse number is: %d",rev);

    int multip;
    multip = sum * rev;

    printf("\nmultiplication is : %d",multip);

    if(multip == num)
    {
        printf("\n%d is magic number....",num);
    }
    else
    {
        printf("\n%d number is not a magic number....",num);
    }


}