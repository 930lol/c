#include<stdio.h>
int main()
{
	int *x,*y;
	int a=5,b=10,*temp;
	x=&a;
	y=&b;
	*temp=&a;
	&a=&b;
	&b=*temp;
	printf("%d,%d",x,y);
}
