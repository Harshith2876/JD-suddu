#include<stdio.h>
main()
{
	int n,i,temp;
	printf("enter the limit n:");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
		
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 54789;
}
