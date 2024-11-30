#include<stdio.h>
main()
{
	int n,i,p;
	printf("enter the number of elements n");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("enter the position of element to be deleted");
    scanf("%d",&p);
	for(i=p-1;i<n;i++)
	{
		a[i]=a[i+1];
		}	
	for(i=0;i<n-1;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
