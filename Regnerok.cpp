#include <stdio.h>
int main ()
{
	int t;
	int numb, border;
	int a, mn, mx, sel;

	scanf("%d", &t);

	for(int i = 0; i<t ;i++)
	{
		mn= 1000000000;
		mx= 0;
		scanf("%d %d", &numb, &border);

		for(int j = 0 ; j<numb; j++)
		{
			scanf("%d", &a);
			if(mn>a)
			{
				mn=a;
			}
			if(mx<a)
			{
				mx=a;
			}
		}
		sel = mx-mn;

		mx=0;
		mn=1000000;

		if(sel>border)
		{
			printf("Case #%d: NO\n", i+1);
		}
		else 
		{
			printf("Case #%d: YES\n", i+1);
		}
	}


	return 0;
}