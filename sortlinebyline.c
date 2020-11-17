#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

/* Head ends here */
void insertionSort(int ar_size, int *  ar) {
    
	int i=ar_size-2,n;
	n=ar[ar_size-1];
	//printf("N = %d\n",n);
	while(ar[i] > n)
	{	ar[i+1] = ar[i];
		disp(ar,ar_size);
		i--;
	}	
	ar[i+1] = n;
	disp(ar,ar_size);
	
}
void disp(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}

/* Tail starts here */
int main() {
   
   int _ar_size;
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
   scanf("%d", &_ar[_ar_i]); 
}

insertionSort(_ar_size, _ar);
   
   return 0;
}
