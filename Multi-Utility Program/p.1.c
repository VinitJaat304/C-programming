#include<stdio.h>

main()
{
	const float x=1.8;
	float a;
	
	printf("the temperature in celcisu :");
	scanf("%f",&a);
	
	printf("the temperature in fahrenheit :%.2f",(x*a)+32);
}
