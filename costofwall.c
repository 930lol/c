#include<stdio.h>
int main()
{
	int i,n,m,iw=18,ew=12;
	printf("Enter the number of interior wall:");
	scanf("%d",&n);
	printf("Enter the number of exterior wall:");
	scanf("%d",&m);
	float a[n],b[m];
	printf("Enter the lenght of  interior wall:");
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
	printf("Enter the lenght of extrior wall:");
	for(i=0;i<m;i++)
	{
		scanf("%f",&b[i]);
	}
	float f=0,s=0;
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	printf("the total wall of the wall 1 is %f:\n",s);
	f=f+s*iw;
	s=0;
	for(i=0;i<m;i++)
	{
		s=s+b[i];
	}
	printf("the total wall of the wall 2 is %f:\n",s);
	f=f+s*ew;
	printf("the cost of the wall is %.1f:",f);
	return 0;
}
