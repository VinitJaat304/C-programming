#include<stdio.h>

main()
{
	int num,a=0,b=1,c,i;
	
	printf("Enter any number :");
	scanf("%d",&num);
	
	printf("%d\t%d\t",a,b);
	
	for(i = 3 ; i <= num; i++)
	{
		c = a + b;
		
		printf("%d\t",c);
		
		a = b;
		b = c;
	}
	
}
