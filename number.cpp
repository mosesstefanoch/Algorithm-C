#include <stdio.h>
int main (){
	int t,a,b;
	scanf("%d",&t);
	for (int i =1;i<=t;i++)
	{
		scanf("%d",&a);
		int arr[100001]={};
		for(int j=1;j<=a;j++)
		{
			scanf("%d",&b);
			arr[b]++;
		}
		printf("Case #%d:\n",i);
		for(int j=1;j<=100001;j++)
		{
			if(arr[j]!=0)
			{
				printf("%d %d\n",j,arr[j]);
			}
		}
	}
	getchar();
	return 0;
}
