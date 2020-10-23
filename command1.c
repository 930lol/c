#include<stdio.h>
int main(int argc,char* argv[])
{
	int a,b,i,s=0;
	if(argc==1)
	{
		printf("Thank you");
		return 0;
	}
	else
	{
		for(i=1;i<argc;i++)
		{
			a=atoi(argv[1]);
			b=atoi(argv[2]);
		}
		s=a+b;
	}
	printf("%d sum of two number",s);
	return 0;
}

