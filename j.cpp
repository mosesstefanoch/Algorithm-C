#include <stdio.h>

//int par(int arr[],int first, int last)
//{
//	int i,j,pi;
//	int temp;
//	
//	pi = last;
//	printf("%d\n",pi);
//	i=first-1;
//	
//	for ( j=first ; j<=last-1 ; j++)
//	{
//		if (arr[j] <= arr[pi])
//		{
//			i++;
//			temp=arr[j];
//			arr[j] = arr[i];
//			arr[i] = temp;
//		}
//	}
//	
//	temp = arr[i+1];
//	arr[i+1] = arr[pi];
//	arr[pi] = temp;
//	
//	return i+1;
//}
//
//void qs(int arr[],int first, int last)
//{
//	if (first < last)
//	{
//		int pi = par(arr,first,last);
//		
//		qs (arr,first,pi-1);
//		qs (arr,pi+1,last);
//	}
//}

void merge (int arr[], int first, int mid, int mid2, int last)
{
	int temp[100001];
	int i,j,k;
	
	i=first;
	j=mid2;
	k=0;
	
	while ( i<=mid && j<=last)
	{
		if (arr[i] < arr[j])
		{
			temp[k++]=arr[i++];
		}
		else
		{
			temp[k++]=arr[j++];
		}
	}
	
	while (i <= mid)
	{
		temp[k++]=arr[i++];
	}
	
	while ( j<=last)
	{
		temp[k++]=arr[j++];
	}
	
	for (i=first, j=0 ; i<=last ; i++,j++ )
	{
		arr[i]=temp[j];
	}
}

void mergesort(int arr[],int first, int last)
{
	int mid;
	
	if ( first < last)
	{
		mid = (first+last)/2;
		
		mergesort(arr,first,mid);
		mergesort(arr,mid+1,last);
		merge(arr,first,mid,mid+1,last);
	}
}

int bin(int arr[],int left,int right,int q)
{
	int mid;

	while (left <= right)
	{
		mid = (left + right)/2;
		
		if (arr[mid] == q)
		{
			return mid+1;
		}
		if (arr[mid] < q  && arr[mid+1] > q)
		{
			return mid+1;
		}
		
		if (arr[mid] < q)
		{
			left = mid + 1;
		}
		else if (arr[mid] > q)
		{
			right = mid - 1;
		}
	}
	
	return 0;
	
}

int main ()
{
	int n,m,i,j,q;
	int arr[100001];
	
	scanf("%d %d",&n,&m);
	
	for ( i=0 ; i<n ; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	mergesort (arr,0,n-1);
	
//	for ( i=0 ; i<n ; i++){
//		printf("%d ",arr[i]);
//	}
	
	for ( j=0 ; j<m ; j++)
	{
		scanf("%d",&q);
		
		if (arr[n-1] < q) printf("%d\n",n);
		else if (arr[0] > q) printf("%d\n",0);
		else
		{
			int hasil = bin(arr,0,n-1,q);
		
			printf("%d\n",hasil);
		}
	}
	
	return 0;
}
