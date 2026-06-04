#include <stdio.h>

main()
{
	int a;
	char grade;
	printf("enter your number :");
	scanf("%d",&a);
	
	(a>=81 && a<=100)
	?(grade = 'A', printf("Your Grade Is A. "))
	:(a>=61 && a<=80)
	?(grade = 'B', printf("Your Grade Is B. "))
	:(a>=41 && a<=60)
	?(grade = 'C', printf("Your Grade Is C. "))
	:(a>=33 && a<=40)
	?(grade = 'D', printf("Your Grade Is D. "))
	:(a>=0 && a<=32)
	?(grade = 'F', printf("Your Grade Is F. "))
	:printf("invalid marks.");
	
    switch(grade){
		case 'A' :
			printf("Excellent Work. ");
		break;
		case 'B' :
			printf("Well done. ");
		break;
		case 'C' :
			printf("Good Job. ");
		break;
		case 'D' :
			printf("Your Passed. ");
		break;
		case 'F' :
			printf("Sorry ,You failed. ");
		break;
		default:
			printf("invalid marks.");	
	}
	if (a >= 33 && a <= 100)
	{
        printf("You are eligible for the next level.");
    }
    else if(a>=0 && a <33)
	{
		printf("Please try again next time.");
	}
	else
	{ 
		printf("Invalid Marks.");
	}
}
