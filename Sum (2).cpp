#include <stdio.h>
int main()
{
	int T,i,j,k,l;
	int a,Question;
	int L,R;
	int sum;

	scanf("%d", &T);

	for(i=0;i<T;i++)
	{
		scanf("%d %d", &a, &Question);

	int arr[a];
	for(j=0;j<a;j++)
	{
		scanf("%d", &arr[j]);
	}

	for(k=0;k<Question;k++)
	{
		sum=0;
		scanf("%d %d", &L, &R);
		for(l=L-1;l<=R-1;l++)
		{
			sum = sum + arr[l];
		}
	printf("%d\n", sum);	

	}
	}

	return 0;
}