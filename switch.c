#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	while(1)
	{
		printf("Enter Your Choice:\n");
		printf("1 For Mumbai\n");
		printf("2 For Chennai");
		printf("3 For Kolkata\n");
		printf("4 For Delhi\n");
		printf("5 For exit\n");
		scanf("%d,",&n);
		switch(n)
		{
			case 1:
				printf("HELLO MUMBAI\n");
				break;
			case 2:
				printf("HELLO CHENNAI\n");
				break;
			case 3:
				printf("HELLO KOLKATA\n");
				break;
			case 4:
				printf("HELLO DELHI\n");
				break;
			case 5:
				printf("THANK YOU\n");
				exit(1);
			default:
				printf("INVALID INPUT\n");
			
		}
	}
	return 0;
}
