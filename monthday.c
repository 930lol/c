#include<stdio.h>
int main()
{
	int y,n;
	printf("enter the year to check leap year or not:");
	scanf("%d",&y);
	printf("enter the month you want to findout the date:");
	scanf("%d",&n);
	if((y%4==0&&y%100!=0)||y%400==0)
	{
		switch(n)
		{
			case 1:
				printf("31");
				break;
			case 2:
				printf("29");
				break;
			case 3:
				printf("31");
				break;
			case 4:
				printf("30");
				break;
			case 5:
				printf("31");
				break;
			case 6:
				printf("30");
				break;
			case 7:
				printf("31");
				break;
			case 8:
				printf("31");
				break;
			case 9:
				printf("30");
				break;
			case 10:
				printf("31");
				break;
			case 11:
				printf("30");
				break;
			case 12:
				printf("31");
				break;
			default:
				printf("thank you");
			    break;
		}
	}
	else
	{
		switch(n)
		{
			case 1:
				printf("31");
				break;
			case 2:
				printf("28");
				break;
			case 3:
				printf("31");
				break;
			case 4:
				printf("30");
				break;
			case 5:
				printf("31");
				break;
			case 6:
				printf("30");
				break;
			case 7:
				printf("31");
				break;
			case 8:
				printf("31");
				break;
			case 9:
				printf("30");
				break;
			case 10:
				printf("31");
				break;
			case 11:
				printf("30");
				break;
			case 12:
				printf("31");
				break;
			default:
				printf("thank you");
			    break;
		}
	}
}
