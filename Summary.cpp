#include <stdio.h>

FILE *f;
int count;
int angka[1001];

void read_file()
{
	count = 0;
	f = fopen("testdata.in", "r");

	while (fscanf(f, "%d\n", &angka[count]) != EOF)
	{
		count++;
	}
	fclose(f);
}

void hitung()
{
	int a = 0;
	for(int i = 0 ; i<count ; i++)
	{
		a++;
	}
	printf("Count : %d\n", a);
}

void Sum ()
{
	int penjumlahan=0;
	for(int j = 0 ; j<count ; j++)
	{
		penjumlahan = penjumlahan + angka[j];
	}
	printf("Sum   : %d\n", penjumlahan);
}

void Mean ()
{
	double a=0, penjumlahan=0;
	for(int i = 0 ; i<count ; i++)
	{
		a++;
	}

	for(int j = 0 ; j<count ; j++)
	{
		penjumlahan = penjumlahan + angka[j];
	}
	printf("Mean  : %.2f\n", penjumlahan/a);
}

void min(){
	int small = angka[0];
	int large = angka[0];
	
	for(int y=0;y<count;y++)
	{
		if(angka[y]>large)
		{
			large = angka[y];
		}
		if(angka[y]<small)
		{
			small = angka[y];
		}
	}
	printf("Min   : %d\n", small);
}

void max(){
	int small = angka[0];
	int large = angka[0];
	
	for(int y=0;y<count;y++)
	{
		if(angka[y]>large)
		{
			large = angka[y];
		}
		if(angka[y]<small)
		{
			small = angka[y];
		}
	}
	printf("Max   : %d\n", large);
}

void range(){
	int small = angka[0];
	int large = angka[0];
	
	for(int y=0;y<count;y++)
	{
		if(angka[y]>large)
		{
			large = angka[y];
		}
		if(angka[y]<small)
		{
			small = angka[y];
		}
	}
	printf("Range : %d\n", large-small);
}


int main ()
{
	read_file();
	hitung();
	Sum();
	Mean();
	min();
	max();
	range();

	return 0;
}
