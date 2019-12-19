#include<stdio.h>
main()
{
	int i,r,n,sum=0,temp,fact;
	printf("\n enter no:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		fact=1;
		for(i=1;i<=r;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		n=n/10;
		}
	if(sum==temp)
	printf("\n strong no");
	else
	printf("\n not strong no");
}
