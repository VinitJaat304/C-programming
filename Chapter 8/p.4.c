#include <stdio.h>

main()
{
	int a =1;
	int N;
	printf("Enter your number :");
	scanf("%d",&N);
	
	while(N>=a)	
	{
		if(a%2 != 0)
		{
			printf("%d\t",a);
		}
		a++;
	}
}
