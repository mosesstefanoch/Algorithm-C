#include <stdio.h>

int part(long long int arr[], int first, int last)
{
	int i,j,pivot,temp;
	
	pivot = last;
	i = first-1;
		
	for ( j=first ; j<=last-1 ; j++)
	{
		if (arr[j] <= arr[pivot])
		{
			i++;
			temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
		}
	}
		
	temp = arr[i+1];
	arr[i+1] = arr[pivot];
	arr[pivot] = temp;

	return i+1;
}

void qs(long long int arr[],int first, int last)
{
	if (first < last)
	{
		int pi = part(arr,first,last);
		
		qs(arr,first,pi-1);
		qs(arr,pi+1,last);
	}
	
}

int main ()
{
	int n,m;
	long long int arr[10001];
	int y;

	scanf("%d %d", &n, &m);

	for(int i=0 ; i<n ; i++)
	{
		scanf("%lld", &arr[i]);
	}
	qs(arr,0,n);
	for(int j=0 ; j<m ; j++)
	{
		scanf("%d", &y);
		printf("%lld\n", arr[y]);
	}
	


	return 0;
}