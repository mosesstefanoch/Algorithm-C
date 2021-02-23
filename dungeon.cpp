#include<stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	for(int j=1;j<=t;j++)
	{
		int arr[1001];
		int max_length;
		int index_of_boss = 0;
		scanf("%d", &max_length);
		scanf("%d", &arr[0]);
		int max = arr[0];
		int countleft = 0;
		int countright = 0;
		int max_left = 0;
		int max_right = 0;
		for (int i = 1; i < max_length; i++)
		{
			scanf("%d", &arr[i]);
			if (arr[i] > max)
			{
				max = arr[i];
				index_of_boss = i;
			}
		}
		if (index_of_boss != 0)
		{
			max_left = arr[0];
			countleft = 1;
			for (int i = 1; i < index_of_boss; i++)
			{
				if (arr[i] == max_left)
				{
					countleft++;
				}
				else if (arr[i] > max_left)
				{
					max_left = arr[i];
					countleft = 1;
				}
			}
		}
		if (index_of_boss < (max_length - 1))
		{
			max_right = arr[max_length-1];
			countright = 1;
			for (int i = (max_length-1); i > index_of_boss; i--)
			{
				if (arr[i] == max_right)
				{
					countright++;
				}
				else if (arr[i] > max_right)
				{
					max_right = arr[i];
					countright = 1;
				}
			}

		}
		printf("Case #%d: ", j);	
		if (max_length == 1)
			printf("same\n");
		else if (index_of_boss == 0 || max_right > max_left)
			printf("left\n");
		else if (index_of_boss == (max_length - 1) || max_left > max_right)
			printf("right\n");
		else
		{
			if (countleft > countright)
				printf("right\n");
			else if (countright > countleft)
				printf("left\n");
			else
				printf("same\n");
		}
	}
	getchar();
	return 0;
}