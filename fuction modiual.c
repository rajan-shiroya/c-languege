adition(int n)
{
	if(n%3==0 && n%5==0){
		printf("this value modual by 3 and 5");
	}
	else{
		printf("this value not modual by 3 and 5");	
	}
}

main(){
	int n;
	printf("please enter any value of n:-");
	scanf("%d",&n);
	adition(n);
}
