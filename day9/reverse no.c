#include<stdio.h>
main()
{
	int r,n;
	printf("\n enter n value:");
	scanf("%d",&n);
	printf("\n reverse no is:");
	while(n>0)
	{
		r=n%10;
		printf("%d",r);
		n=n/10;
	}
}
