#include<stdio.h>
main()
{
	int i,n;
	i=1;
	printf("\n enter n value:");
	scanf("%d",&n);
	while(i<=20)
	{
		printf("\n %d X %d = %d",n,i,i*n);
		i++;
	}
}
