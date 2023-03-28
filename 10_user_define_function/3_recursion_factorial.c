//Factorial using recursion

#include<stdio.h>

int Fact(int n)
{
    
    if(n<=1)
    {
        return 1;
    }
    else
    {
        return n * Fact(n-1);
    }
}

void main()
{
    int i,ans;
    printf("Enter the value: ");
    scanf("%d",&i);

    ans = Fact(i);
    printf("%d",ans);

}