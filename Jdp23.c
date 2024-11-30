#include<stdio.h>
main()
{
	int a,b,c,n;
	printf("enter the number a:");
	scanf("%d",&a);
		printf("enter the number b:");
	scanf("%d",&b);
	printf("select the operation to be performed\n");
	printf("press 1 for addition\n");
	printf("press 2 for subtraction\n");
	printf("press 3 for multiplication\n");
	printf("press 4 for division\n");
	printf("press 5 for remainder\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1: c=a+b;
		        break;
	    case 2: c=a-b;
		        break;
	    case 3: c=a*b;
		        break;
	    case 4: c=a/b;
		        break;
		case 5: c=a%b;
		        break;
		default: c=0;
		        break;
	}
	printf("%d",c);
}
