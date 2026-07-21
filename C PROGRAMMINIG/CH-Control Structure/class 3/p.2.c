#include <stdio.h>

main()
{
	int a,b;
	printf("press 1 for English\n");
	printf("press 2 for Hindi\n");
	printf("press 3 for Gujarati\n");
	
	printf("Enter Your Choice\n");
	scanf("%d",&a);
	
	switch(a){
		case 1:
			printf("press 1 for Internet Recharge\n");
			printf("press 2 for Top-up Recharge\n");
			printf("press 3 for Special Recharge\n");
			printf("Enter Your Choice\n");
			scanf("%d",&b);
			switch(b){
			case 1:
				printf("You have successfully done a Internet Recharge.");
			break;
			case 2:
				printf("You have successfully done a top-up Recharge.");
			break;
			case 3:
				printf("You have successfully done a Special Recharge.");
			break;
			default:
				printf("Invalid number .");
			}
			break;
		case 2:
			printf("Internet Recharge ke liye 1 dabaiye\n");
			printf("Top-up Recharge ke liye 2 dabaiye\n");
			printf("special Recharge ke liye 3 dabaiye\n");
			printf("Enter Your Choice\n");
			scanf("%d",&b);
			switch(b){
			case 1:
				printf("Aapne safaltapurvak Internet recharge kar liya he.");
			break;
			case 2:
				printf("Aapne safaltapurvak Top-up recharge kar liya he.");
			break;
			case 3:
				printf("Aapne safaltapurvak special recharge kar liya he.");
			break;
			default:
				printf("Invalid number .");
			}
			break;
		case 3:
			printf("Internet Recharge mate 1 dabavo\n");
			printf("Top-up Recharge mate 2 dabavo\n");
			printf("special Recharge mate 3 dabavo\n");
			printf("Enter Your Choice\n");
			scanf("%d",&b);
			 switch(b){
			case 1:
				printf("Tame safaltapurvak Internet recharge karyu chhe.");
			break;
			case 2:
				printf("Tame safaltapurvak Top-up recharge karyu chhe.");
			break;
			case 3:
				printf("Tame safaltapurvak special recharge karyu chhe.");
			break;
			default:
				printf("Invalid number .");	
			}
	}
}
