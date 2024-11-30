#include<stdio.h>
int main()
{
	int l, b, p, a;
	printf("enter the length of the rectangle :");
	scanf("%d", &l);
printf("enter the breadth of the rectangle :");
	scanf("%d", &b);
	
	p=l+b;
	a=l*b;
	printf("Perimeter of the rectangle= %d\n",p);
	printf("Area of the rectangle= %d",a);
	return 0;
}
