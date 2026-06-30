#include<stdio.h>

main()
{
	int n,j,k,l,m;
	printf("Enter any number :");
	scanf("%d",&n);
	
	for(j=1; j<=n; j++)
	{
	for(k=1; k<=j; k++)
	{
		printf("*");
	}
	for(l=n-1; l>=j; l--)
	{
		printf("  ");
	}
	for(m=1; m<=j; m++)
	{
		printf("*");		
	}
	printf("\n");
}
	
}
