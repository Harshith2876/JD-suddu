#include<stdio.h>
int main()
{
	float P, T, R, SI;
printf("enter the principle amount= ");
scanf("%f", &P);
printf("enter the time= ");
scanf("%f", &T);
printf("enter the rate of interest= ");
scanf("%f", &R);
SI=(P*T*R)/100;
printf("the simple interest is :%f", SI);
return 0;
}
