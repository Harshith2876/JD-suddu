#include<stdio.h>
int main()
{
	int a;
	printf("ENTER ANY NUMBER a=");
	scanf("%d",&a);
	if(a>0)
	{
		printf("the number %d is positive",a);
	}
	else if(a<0)
	{
		printf("the number is %d is negative",a);
	}
	else
	{
		printf("the number is %d is zero",a);
	}
	return 0;
}
