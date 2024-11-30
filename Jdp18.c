#include<stdio.h>
main()
{
	int n,mult=1,i;
	printf("enter the limit n");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		mult=mult*i;
	}
	printf("%d",mult);
	return 0;
}
