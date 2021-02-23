#include<stdio.h>
#include<math.h>

int main()
{
	double sum=0;
	int count=0;
	
	FILE *f =fopen("testdata.in","r");
	while(!feof(f))
	{
		float data;
		fscanf(f ,"%f ",&data);
		count++;
		if(fmod(sqrt(data),1)==0){
		data*=-1;
		}
		sum+=data;
	}

	printf("Special sum of %d datas is %.0lf.\n",count,sum);
	fclose(f);
	return 0;
}
