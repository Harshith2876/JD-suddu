#include<stdio.h>
main()
{
	int n,j,i,m;
	printf("enter the limit n:");
	scanf("%d%d",&m,&n);
	int a[m][n];
	printf("enter the elements of array");
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
		printf("%d ",a[i][j]);
	}
	printf("\n");
}
}
