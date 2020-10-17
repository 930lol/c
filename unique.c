#include<stdio.h>
void repeating_element(int arr[], int n)
{
	int i, j;
	int count = 0;
	printf("Repeating elements are: ");
	for(i = 0;i < n;i++)
	{
		for(j = i+1;j < n;j++)
		{
			if(arr[i] == arr[j])
			{
				printf("%d ", arr[j]);
			}
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	repeating_element(arr,n);
	return 0;
}

