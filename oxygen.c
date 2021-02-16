#include<stdio.h>
#include<math.h>
int main()
{
	int i,x,t1=0,t2=0,t3=0,count=1;
	int a1,a2,a3;
	while(count<=9)
	{
		printf("Enter the oxygen level for %d:",count%3);
		scanf("%d",&x);
		if(x>=1&&x<=100)
		{
			if(count % 3==1)
			{
				t1=t1+x;
			}
			else if(count % 3==2)
			{
				t2=t2+x;
			}
			else
			{
				t3=t3+x;
			}
			count++;
		}
	//	count++;
	}
	a1=t1/3;
	a2=t2/3;
	a3=t3/3;
	if(a1 <= 70 && a2 <= 70 && a3 <=70)
	{
		printf("ALL trainee are unfit");
		return 0;
	}
	if(a1>=a2 && a1>=a3)
	{
		printf("trainee number: 1\n");
	}
	if(a2>=a1 && a2>=a3)
	{
		printf("trainee number: 2\n");
	}
	if(a3>=a2 && a3>=a1)
	{
		printf("trainee number: 3\n");
	}
	return 0;
}
