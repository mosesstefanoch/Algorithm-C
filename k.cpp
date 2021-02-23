#include <stdio.h>

int main()
{
	int n, arr[20001]; //jumlah test case
	scanf("%d", &n);
	//getchar();
	//fflush(stdin);
	for(int i = 0;i<n;i++)
		scanf("%d", &arr[i]);
		//getchar();
		//fflush(stdin);
	int set_1[20001], set_2[20001], counter = 0, flag = 0;
	for(int i = 1;i<n+1;i++)
	{
		flag = 0;
		for(int k = 0;k<counter;k++)
		{
			if(i == set_1[k] || i == set_2[k])
				flag = 1;
		}
		if(flag == 1)
			continue;
		for(int j = 1;j<n+1;j++)
		{
			flag = 0;
			if(arr[j-1]%2 == 0)
				continue;
			if(counter == 0)
			{
				set_1[counter] = i;
				set_2[counter] = j;
				counter++;
				break;
			}
			else
			{
				for(int k = 0;k<counter;k++)
				{
					if(j == set_2[k] || j == set_1[k])
						flag = 1;
				}

				if(flag == 0 && i<j)
				{
					set_1[counter] = i;
					set_2[counter] = j;
					counter++;
					break;
				}
			}
		}
	}
	printf("%d", counter);
	//for(int i =0;i<counter;i++)
	//	printf("(%d, %d) ", set_1[i], set_2[i]);




	getchar();
	return 0;
}