#include<stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	for(int j=1 ; j<=t ; j++)
	{
		int sum = 0;
		int max_loop, max_limit, substract;
		scanf("%d %d %d", &max_loop, &max_limit, &substract);
		printf("Case #%d:\n", j);
		for (int i = 1; i <= max_loop; i++)
		{
			sum += i;
			if (sum > max_limit)
			{
				printf("%d\n", sum);
				if ((sum-max_limit)%substract == 0)
					sum -= substract*((sum - max_limit) / substract);
				else
					sum -= substract*((sum - max_limit) / substract + 1);
			}
		}
	}	
	getchar();
	return 0;
}