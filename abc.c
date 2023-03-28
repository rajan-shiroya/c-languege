#include<stdio.h>
main(){
   int choies,num;
   
   printf("1 for English\n");
   printf("2 for Hindi\n");
   printf("3 for Gujrati\n");
   
   printf("please select any number\n");
   scanf("%d",&choies);
   
   switch(choies){
   	
   	case 1:
   	
   		printf("press 1 for recharge....\n");
   		printf("press 2 for toktime....\n");
   		printf("press 3 for check internet balance....\n");
   		printf("press 4 for your plan validity....\n");
   		printf("press 5 for calletune....\n");
   		
   		printf("enter Your choiese......\n");
   		scanf("%d",&num);
   		switch(num){
   			
   		case 1:
		   printf("Thnak you for recharge  \n your recharege 99999rs done.....\n");
		   break;
		case 2:
			printf("Your Toktime is 29.83rs......\n");
			break;
		case 3:
			printf("Your Internet Balance Is 1.5Gb valid Till 09/02/2023 11.59 pm....\n");
   			break;
   		case 4:
   			printf("Your plan Valid Till 01/03/2023 11.59 pm... please recharge fast.......\n");
   			break;
   		case 5:
   			printf("plese download our calletune app in play store....\n");
   			break;
   		default:
   			printf("Invalid input Please try again\n");
   			break;
		   }
		break;
	   
	   case 2:
	   		printf("press 1 for recharge....\n");
   		printf("press 2 for toktime....\n");
   		printf("press 3 for check internet balance....\n");
   		printf("press 4 for your plan validity....\n");
   		printf("press 5 for calletune....\n");
   		
   		printf("enter Your choiese......\n");
   		scanf("%d",&num);
   		switch(num){
   			
   		case 1:
		   printf("Thnak you for recharge.....\n");
		   break;
		case 2:
			printf("Your Toktime is 29.83rs......\n");
			break;
		case 3:
			printf("Your Internet Balance Is 1.5Gb valid Till 09/02/2023 11.59 pm....\n");
   			break;
   		case 4:
   			printf("Your plan Valid Till 01/03/2023 11.59 pm... please recharge fast.......\n");
   			break;
   		case 5:
   			printf("plese download our calletune app in play store....\n");
   			break;
   		default:
   			printf("Invalid input Please try again\n");
   			break;
		   }
   	
		break;
	   
	   case 3:
   	  	printf("press 1 for recharge....\n");
   		printf("press 2 for toktime....\n");
   		printf("press 3 for check internet balance....\n");
   		printf("press 4 for your plan validity....\n");
   		printf("press 5 for calletune....\n");
   		
   		printf("enter Your choiese......\n");
   		scanf("%d",&num);
   		switch(num){
   			
   		case 1:
		   printf("Thnak you for recharge.....\n");
		   break;
		case 2:
			printf("Your Toktime is 29.83rs......\n");
			break;
		case 3:
			printf("Your Internet Balance Is 1.5Gb valid Till 09/02/2023 11.59 pm....\n");
   			break;
   		case 4:
   			printf("Your plan Valid Till 01/03/2023 11.59 pm... \nplease recharge fast.......\n");
   			break;
   		case 5:
   			printf("plese download our calletune app in play store....\n");
   			break;
   		default:
   			printf("Invalid input Please try again.....\n");
   			break;
		   }
		break;
	   
	   default:
	   	printf("please try again....");
		break;
	   
   }	


}
