#include<stdio.h>
main()
{
	int n,sum=0,i;
	printf("enter the limit n");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
	return 0;
}
