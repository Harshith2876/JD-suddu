#include<stdio.h>
main()
{
	int n,q,sum=0,rem,s=0;
	printf("enter a positive number n:");
	scanf("%d",&n);
	q=n;
	while(q!=0)
	{
		rem=q%10;
		q=q/10;
		sum=sum+rem;
	}
	printf("%d\n",sum);
	q=n;
	while(q!=0)
	{
		rem=q%10;
		q=q/10;
		s=(s*10)+rem;
	}
	printf("%d",s);
	if(s==n)
	{
		printf("the number is polindrome");
	}
	else
	{
		printf("the number is not polindrome");
	}
	return 0;
}
	
