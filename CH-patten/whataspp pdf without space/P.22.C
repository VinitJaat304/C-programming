#include<stdio.h>

main()
{
	int i, j;
	char c='A';
	
	
	for(i = 'A'; i <= 'E'; i++)
	{
		for(j = 'A'; j <= i; j++)
		{
			printf(" %c",c);
			c++;
		}printf("\n");
	}
}
