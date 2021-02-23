#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	char kata[33];
	int t,a;

	scanf("%d", &t);

	for(a=1;a<=t;a++)
	{
		scanf("%s", kata);

		int i;
		long long int power = 0;
		long long int hasil=0;
		for(i=strlen(kata)-1;i>=0;i--)
		{
			if(kata[i] == '1')
			{
				hasil += pow(2,power);
			}
			else if(kata[i] == ')')
			{
				i-=3;
				hasil -= pow(2,power);
			}
			power++;
		}

	printf("Case #%d: %lld\n",a, hasil);
}


	getchar();
	return 0;
}


