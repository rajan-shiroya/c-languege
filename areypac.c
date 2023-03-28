#include<stdio.h>

main(){
	int n;

	printf("enter your total subject :-");
	scanf("%d",&n);
	int marks[n];
	printf("\nenter your marks :-");
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nenter [%d]subject marks: ",i);
		scanf("%d",&marks[i]);
	}
	
	printf("\nmarks are....\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",marks[i]);
	}
	
}
