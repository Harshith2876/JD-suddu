#include<stdio.h>
int main()
{
	int n,i,factors=0;
	printf("enter a number n=");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
	{
factors++;
	}
}
	if(factors==2)
	{
printf("the entered number is prime");
	}
else
{
	printf("the given number is not prime");
}
	return 0;
}
