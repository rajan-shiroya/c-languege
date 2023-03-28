#include<stdio.h>
main()
{
	int n,i;
	int isprime=1;
	
	printf("enter any number:- ");
	scanf("%d",&n);
	
	for(i=2; i*i<n;i++){
		if(n%i==0){
			isprime=0;
		}
	}
	if(isprime){
		printf("this number is prime number.......");
	}
	else{
		printf("thus number is not prime number......");
	}
	
	
	
	
}
