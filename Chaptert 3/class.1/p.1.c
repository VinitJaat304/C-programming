#include<stdio.h>

main()
{
	float x , y;
	
	printf("enter a value of x :");
	scanf("%f",&x);
	printf("enter a value of y :");
	scanf("%f",&y);
	
	printf("enter value of (x+y)(x+y) :%.2f",(x*x)+(2*x*y)+(y*y));
}
