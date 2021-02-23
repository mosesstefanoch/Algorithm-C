#include <stdio.h>
int left,right;
int cari(int angka[], int sum, int hasil)
{
	int total;
	for(left=0; left<sum; left++)
	{
		total=0;
		for(right=left; right<sum; right++)
		{
			total += angka[right];
			if (total==hasil) return 0;
		}
	}
	return -1;
}

int main(){
	int t, input, angka[1001], hasil;
	scanf("%d %d", &input, &t); 
	getchar();
		for (int i=0; i<input; i++)
		{
			scanf("%d", &angka[i]);
		}
		for (int j=1; j<=t;j++)
		{
			scanf("%d", &hasil);
			int check=cari(angka, input, hasil);
			printf("Case #%d: ", j);
			if (check==0)
			{
				printf("%d %d\n", left, right);
			}
			else printf("-1\n");
		}
		return 0;
}
