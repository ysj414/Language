#include <stdio.h>

void SelSort(int a[], int n)
{
	int i,j;
	int max;
	int temp;

	for(i=0; i<n; i++)
	{
		max=i;
		for(j=i+1; j<n; j++)
		{
			if(a[max]>a[j])
			  max=j;
		}
		temp=a[i];
		a[i]=a[max];
		a[max]=temp;
	}
}


int main(void)
{
	int arr[4]={3,2,1,4};
	int i;

	SelSort(arr,sizeof(arr)/sizeof(int));
	
	for(i=0; i<4; i++)
		printf("%d ",arr[i]);

	return 0;
}
