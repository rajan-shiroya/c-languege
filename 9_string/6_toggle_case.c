//WAP to convert given string in togglecase

#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter the size of the string: ");
    scanf("%d",&n);
    char str[n];
    printf("\nEnter any string: ");
    scanf("%s",&str);
    
    for(i=0;i<n;i++)
    {
        if(str[i]%2==0 && str[i]>=65 && str[i]<=90)
        {
            str[i] = str[i];
        }
        else if(str[i]%2==0 && str[i]>=97 && str[i]<=122)
        {
            str[i] = str[i]-32;
        }
        else if(str[i]%2!=0 && str[i]>=97 && str[i]<=122)
        {
            str[i] = str[i];
        }
        else
        {
            str[i] = str[i]+32;
        }
    }
    printf("\nString in togglecase is: %s",str);

}