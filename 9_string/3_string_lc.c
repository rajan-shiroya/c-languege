//WAP to convert given string into lowercase

#include<stdio.h>
void main()
{
    int n;
    printf("Enter the length of the string: ");
    scanf("%d",&n);

    char str[n];
    printf("Enter the string: ");
    scanf("%s",&str);
   

    int i;
    for(i=0;i<n;i++)
    {
        if(str[i]>=90 && str[i]<=122)
        {
            str[i] = str[i];
        }
        else
        {
            str[i] = str[i]+32;
        }
    }
    printf("String in lowercase is: %s",str);


}