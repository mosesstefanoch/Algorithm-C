#include <stdio.h>
#include <math.h>

int main()
{
	int t;
	scanf("%d", &t);
	for(int a=1;a<=t;a++)
	{
	int angka;
	scanf("%d", &angka);

	int i;
	int count = 0;
	for(i=1;i<=sqrt(angka);i++)
	{
		if(angka%i == 0 && i != sqrt(angka))
		{
			count +=2;
		}
		else if (i == sqrt(angka))
		{
			count++;
		}
	}

	printf("Case #%d: %d\n", a,count);
	getchar();
}
	return 0;
}