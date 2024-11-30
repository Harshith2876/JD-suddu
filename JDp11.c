#include<stdio.h>
int main()
{
	float p, t, r, n;
printf("enter the principle amount= ");
scanf("%f", &p);
printf("enter the time= ");
scanf("%f", &t);
printf("enter the rate of interest= ");
scanf("%f", &r);
printf("enter the no of times interest is compounded= ");
scanf("%f", &n);
printf("the compound interest is :%f", p*(pow(1+r/100,t)));
return 0;
}
