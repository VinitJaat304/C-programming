#include<stdio.h>

main()
{
	int n,j,k,l,m;
	printf("Enter any number :");
	scanf("%d",&n);
	
	for(j=n; j>=1; j--)
	{
		for(k=j; k>=1; k--)
		{
			printf("*");
		}
		for(l=j; l<=n-1; l++)
		{
			printf("  ");
		}
		for(m=j; m>=1; m--)
		{
			printf("*");		
		}
		printf("\n");
	}
}
