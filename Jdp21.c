#include<stdio.h>
main()
{
	int n;
	printf("enter the marks percentage");
	scanf("%d",&n);
	if(n>70&&n<=100)
	{
		printf("student passed with distinction");
	}
	else if(n>=60&&n<=70)
	{
		printf("student passed with first class");
	}
	else if(n>=40&&n<60)
	{
		printf("student passed with second class");
	}
	else
	{
		printf("student failed");
	}
	return 0;
}
