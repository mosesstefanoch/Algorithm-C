#include<stdio.h>

struct info {
	char size;
	int colour;
};

int main() {
	struct info friends [1001];
	int t, num, count, count1, count2, b, c, d;
	scanf("%d",&t);
	for(int i=1; i<=t; i++) 
	{
		scanf("%d",&num);
		getchar();
		for(b=0; b<num; b++) 
		{
			scanf("%c %d",&friends[b].size,&friends[b].colour);
			getchar();
		}
		count=0;
		count1=0;
		count2=0;
		for(c=0; c<num; c++) 
		{
			if(friends[c].size==0) 
			continue;
			for(d=c+1; d<num; d++) 
			{
				
				if(friends[c].size==friends[d].size && friends[c].colour==friends[d].colour) 
				{
					count++;
					friends[d].size=0;
					break;
				}
			}
		}
		printf("Case #%d: %d\n",i,count*10);
	}
	
	return 0;
}
