#include <stdio.h>
int gdc(int a,int b)
{
	int c,temp;
	do{
		c=b%a;
		if(c!=0)
		{
			temp=b;
			b=a;
			a=c;
			c=temp;
		}
	}while(c!=0);
	return a;
}
int main()
{
	int t,a;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		scanf("%d",&a);getchar();
		int b[10000]={};
		for(int j=1;j<=a;j++)
		{
			scanf("%d",&b[j]);
		}
		int ggdc=0;
		for(int j=1;j<=a;j++)
		{
			for(int k=j+1;k<=a;k++)
			{
				if(gdc(b[j],b[k])>ggdc)
				{
					ggdc=gdc(b[j],b[k]);
				}
			}
		}
		printf("Case #%d: %d\n",i,ggdc);
	}
	return 0;
}
