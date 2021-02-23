#include<stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	for(int j=1; j<=t ; j++)
	{
		int max_length = 0;
		int max_char = 0;
		int length = 0;
		int temp = 0;
		int string_length;
		char temp2;
		scanf("%d", &string_length);
		getchar();
		for (int i = 0; i < string_length; i++)
		{
			scanf("%c", &temp2);
			if (temp2 == '0')
			{
				if (temp == 0)
					length++;
				else
				{
					if (length > max_length)
					{
						max_length = length;
						max_char = 1;
					}
					length = 1;		
				}
				temp = 0;
			}
			else
			{
				if (temp == 1)
					length++;
				else
				{
					if (length > max_length)
					{
						max_length = length;
						max_char = 0;		
					}
					length = 1;		
				}
				temp = 1;
			}
		}
		if (length > max_length)
		{
			max_length = length;
			max_char = temp;
		}
	printf("Case #%d: %d %d\n",j, max_char, max_length);
	}
	getchar();
	return 0;
}
