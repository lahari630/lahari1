#include<stdio.h>
main()
{
	long int r,n,sum=0;
	printf("\n enter no:");
	scanf("%ld",&n);
	test: while(n>0)
	{
		r=n%10;
		sum+=r;
		n=n/10;
	}
	if(sum<10)
	printf("\n lucky no is:%d",sum);
	else
	{
		n=sum;
		sum=0;
		goto test;
	}
}
