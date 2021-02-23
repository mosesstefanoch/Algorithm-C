#include <stdio.h>

int part(int arr[], int first, int last)
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

void qs(int arr[],int first, int last)
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
	int arr[]={10,80,30,90,40,50,70};
	
	qs(arr,0,6);
	
	for ( int i=0 ; i<7 ; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;	
}
