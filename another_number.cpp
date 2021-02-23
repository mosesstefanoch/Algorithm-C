#include <stdio.h>
int main ()
{
	int t;
	long long int a,b,c,d;
	long long int kiri,kanan;

	scanf("%d", &t);
	for(int i=1 ; i<=t ; i++)
	{
		scanf("%lld %lld %lld %lld",&a, &b, &c, &d);
		long long int x=1;
		int count=0;
		for(int j=1 ; j<1000000 ; j++)
		{
			kiri=(a*x+b)%d;
			kanan=c;
			x++;
			if(kiri == kanan)
			{
				count++;
				break;
			}
		}
		printf("Case #%d: ",i);
		if(count > 0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		kiri=0;
		kanan=0;
	}

	return 0;
}