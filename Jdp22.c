#include<stdio.h>
main()
{
	int n,i,count=0;
	printf("enter the number n:");
	scanf("%d",&n);
	for(i=1;i<=20;i++)
	{
	 printf("%d*%d=%d\n",n,i,n*i);
	 count++;
	}
	printf("%d",count);
	return 0;
}
