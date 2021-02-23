#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int x=1;x<=t;x++)
	{
		int n;
		scanf("%d",&n);
		int arr[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		printf("Case #%d: ",x);
		for(int i=0;i<n;i++)
		{
			int ranking=1;
			for(int j=0;j<n;j++)
			{
				if(arr[i]<arr[j]) ranking++;
			}
			printf("%d",ranking);
			if(i<n-1) printf(" ");
		}
		printf("\n");
	}
	return 0;
}
