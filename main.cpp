#include <stdio.h>
int search (int x, int arr[], int l, int r)
{
	while(r>=l)
	{
		int mid = l+(r-l)/2;
		if (x == arr[mid]) return mid;
		else if(x<arr[mid]) return search(x,arr,l,mid-1);
		else if(x>arr[mid]) return search(x,arr,mid+1,r);
	}
	return -1;
}

int part(int arr[], int first, int last)
{
	int i,j,pivot,temp;

	pivot=last;
	i = first-1;

	for(j=first ; j<=last-1 ; j++)
	{
		if(arr[j] <= arr[pivot])
		{
			i++;
			temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
		}
	}
	temp = arr [i+1];
	arr[i+1] = arr[pivot];
	arr[pivot] = temp;

	return i+1;
}

void qs(int arr[], int first, int last)
{
	if(first < last)
	{
		int pi = part(arr,first,last);

		qs(arr, first, pi-1);
		qs(arr, pi+1 , last);
	}
}
int main ()
{
	int t;
	int n,m;
	int arr[100001];
	int x;

	scanf("%d", &t);
	for(int i=1 ; i<=t ;i++)
	{
		scanf("%d %d", &n, &m);
		for(int j=0 ; j<n ; j++)
		{
			scanf("%d", &arr[j]);
		}
		qs(arr,0,n-1);
		for(int j=0 ; j<m ; j++)
		{
			scanf("%d", &x);
			printf("Case #%d: %d\n", i, search(x,arr,0,n-1));
		}
		
		
	}


	return 0;
}


