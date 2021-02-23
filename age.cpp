#include <stdio.h>

int main()
{
	int t,i;
	int x,y,z,m,n,p;
	int j,b;
	int hasil1,hasil2;
	scanf("%d", &t);

	for(i=1;i<=t ; i++)
	{
		scanf("%d %d %d %d %d %d", &x,&y,&z,&m,&n,&p);
		b=(x-(m*x)-(n*y)+y)/(n-m);
		j=(x-(m*x)+(m*b));
		hasil1=j+z;
		hasil2=p*(b+z);
		if(hasil1 == hasil2)
		{
			printf("Case #%d: YES\n",i );
		}
		else if(hasil1 != hasil2)
		{
			printf("Case #%d: NO\n",i);
		}
	}




	return 0;
}