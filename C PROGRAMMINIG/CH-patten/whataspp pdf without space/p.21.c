#include<stdio.h>

main()
{
	char i, j;
	for(i='A'; i<='E'; i++)
	{
		for(j='A'; j<=i; j++)
		{
			printf("%C",j);
		}printf("\n");
	}
}
