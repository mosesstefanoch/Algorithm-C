#include <stdio.h>
int main ()
{
	int t;
	
	scanf("%d", &t);
	getchar();

	for(int i=1 ; i<=t ; i++)
	{
		char karakter[81]="";
		scanf("%[^\n]", karakter);
		getchar();
		printf("Case #%d: ", i);
		for(int j=0 ; j<80 ; j++)
		{
			if(karakter[j]=='G' || karakter[j]=='g')
			{
				if(karakter[j+1]=='O' || karakter[j+1]=='o')
				{
					if(karakter[j+2]=='O' || karakter[j+2]=='o')
					{
						if(karakter[j+3]=='D' || karakter[j+3]=='d')
						{
							printf("yes\n");
							break;
						}
					}
				}
			}
			if(j==79)
			{
				printf("no\n");
			}
		}
	}



	return 0;
}