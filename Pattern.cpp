#include<stdio.h>

void pattern(int a)
{
	char b[16]="A";
	for (int i=0;i<a;i++)
	{
		if(i==0)
		{
			printf("%c",b[0]);
		}
		else
		{
			printf("%c",b[0]+i);
			pattern(i);
		}
	}
}

int main ()
{
	int t,a;
	scanf("%d",&t);
	
	for(int i=1;i<=t;i++)
	{
		scanf("%d",&a);
		printf("Case #%d: ",i);
		pattern(a);
		printf("\n");
	}
	
	return 0;
}


