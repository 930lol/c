#include<stdio.h>
int main(int argc,char* argv[])
{
	int i,k=0,a[10];
	if(argc==1)
	{
		printf("Thank You");
		return 0;
	}
	else
	{
		for(i=1;i<argc;i++)
		{
			a[k]=atoi(argv[i]);
			k++;
		}
	}
	for(k=0;k<argc-1;k++)
	{
		printf("%d ",a[k]);
	}
	return 0;
}
