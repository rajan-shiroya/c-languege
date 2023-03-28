#include<stdio.h>
cube(int n)
{
	printf("cube  is:- %d",n*n*n);
}
main(){
	int n;
	
	printf("please enter any value of n:-");
	scanf("%d",&n);
	cube(n);
}
