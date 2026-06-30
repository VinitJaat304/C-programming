#include<stdio.h>
#define y 0.01
main()
{
	float a,b,c,x;
	
	printf("base salary :");
	scanf("%f",&a);
	printf("HRA :");
	scanf("%f",&b);
	printf("DA :");
	scanf("%f",&c);
	printf("TA :");
	scanf("%f",&x);
	
	printf("Gross salary :%.2f",a+(a*b*y)+(a*c*y)+(a*x*y));
}
