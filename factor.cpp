#include<stdio.h>
#include <math.h>

int main()
{
	int angka;
	scanf("%d", &angka);

	int i,j;
	int isPrime = 1;
	int prime_divisor[1000];
	int index = 0;
	int count = 0;
	for(i=2;i<=angka;i++)
	{
		isPrime = 1;
		count = 0;
		for(j=1;j<i;j++)
		{
			if(i%j == 0)
			{
				count +=2;
				if(count>2)
				{
					isPrime = 0;
					if(count>2)
						break;
				}
			}
		}
		if(isPrime == 1)
		{
			prime_divisor[index] = i;
			index++;
		}

	}

	for(int i = 0;i<index;i++)
		printf("%d ", prime_divisor[i]);

	getchar();
	return 0;
}