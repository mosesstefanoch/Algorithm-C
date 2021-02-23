#include <stdio.h>

int main ()
{
	int arr[]={1,2,3,4,5};
	int left=0,right,mid,key,index,n;
	
	scanf("%d",&n);
	
	for ( int i=0 ; i<n ; i++)
	{
		scanf("%d",&key);
		
		right = 4;
		left = 0;
		while (left <= right)
		{
			mid = (left+right)/2;
			
			if (arr[mid] == key)
			{
				index=mid;
				break;
			}
			else if(arr[mid] < key)
			{
				left = mid + 1;
			}
			else if(arr[mid] > key)
			{
				right = mid - 1;
			}
		}
		
		if (arr[mid] != key)
		{
			printf("Not found.\n");
		}
		else
		{
			printf("%d\n",index);
		}
		
		index=0;
		mid=0;
	}
	return 0;
}
