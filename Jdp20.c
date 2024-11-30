#include<stdio.h>
main()
{
	int a,n,q,count,digits,sum,mult;
	printf("enter the number n:");
	scanf("%d",&n);
	q=n;
	while(q!=0)
	{
		q=q/10;
		count++;
	}
	digits=count;
	q=n;
	sum=0;
	while(q!=0)
	{
		a=q%10;
		
		mult=1;
		
		while(digits!=0)
		{
			mult=mult*a;
			digits--;
		}
		sum=sum+mult;
		q=q/10;
		digits=count;
	}
	if(sum==n)
	{
		printf("the number is armstrong");
	}
	else
	{
		printf("the number is not armstrong");
	}
}
