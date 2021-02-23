#include <stdio.h>
int main ()
{
	int t;
	int menit;
	int jam;
	int tes;
	scanf("%d", &t);

	for(int i = 1 ; i<=t ; i++)
	{
		scanf("%d", &tes);
		jam = tes/60;
		menit = tes%60;
		printf("Case #%d: %.2d:%.2d\n", i,jam,menit);
	}

	return 0;
}