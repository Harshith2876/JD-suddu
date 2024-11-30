#include<stdio.h>
main()
{
	int n,i,sum=0;
	float avg;
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
		printf("%d ",a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		
	}
	avg=sum/n;
	printf("the sum of the elements in the array is :%d\n the average of the elments in the array is: %f ",sum,avg);
	return 10000;
}
