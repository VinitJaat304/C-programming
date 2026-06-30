#include<stdio.h>

main()
{
	int a;
	printf("Enter your Age :");
	scanf("%d",&a);
	
	if(a>=18)
	{
		printf("You can VOTE.");
	}
	else
	{
		printf("You cannot VOTE.");
	}
}
