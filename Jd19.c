#include<stdio.h>
main()
{
	int n,sum,i,a=0,b=1;
	printf("enter the limit n");
	scanf("%d",&n);
    printf("%d ",a);
    printf("%d ",b);
	for (i=3;i<=n;i++)
	{
	 	sum=a+b;
	 	a=b;
	 	b=sum;
	 	printf("%d ",sum);
	}
	
	return 0;
}
