#include<stdio.h>
#include<math.h>
int main()
{
	double n,s,t;
	scanf("%lf",&s);
	scanf("%lf",&t);
	scanf("%lf",&n);
	double r=t/s;
	double a=s/r;
	double nth=a*pow(r,n-1);
	printf("%lf",nth);
}
