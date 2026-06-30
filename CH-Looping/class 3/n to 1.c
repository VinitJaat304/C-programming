#include <stdio.h>

main ()
{
	int n,a;
	printf("enter any number :");
	scanf("%d" ,&n);
	
	for(a = 1; n >= a; n--)
	{
		printf("%d\t",n);
	}
}
