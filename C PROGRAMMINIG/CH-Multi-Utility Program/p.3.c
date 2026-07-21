#include<stdio.h>
#define x 180
main()
{
	float a,b;
	
	printf("first angle :");
	scanf("%f",&a);
	printf("second angle :");
	scanf("%f",&b);
	printf("third angle :%.2f",x-(a+b));
}
