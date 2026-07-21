#include <stdio.h>

main()
{
	int a;
	int n;
	printf("Enter your number :");
	scanf("%d",&a);
	printf("Enter your number :");
	scanf("%d",&n);
	
	while(a<=n)	
	{
		if(a%4 == 0 && a<=n)
		{
			printf("%d\t",a);
		}
		a++;
	}
}

