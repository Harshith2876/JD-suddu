#include<stdio.h>
main()
{
	int a[]={1,2,3,45,5,6,7,8,9,9};
	printf("size of array is %d",sizeof(a)/sizeof(a[1]));
	return 0;
}
