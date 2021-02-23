#include <stdio.h>
int main (){
	int t,h,m,c,d;
	float a,b,time,time2;
	scanf("%d",&t);
	for (int i=1;i<=t;i++){
		scanf("%f %f %d:%d",&a,&b,&c,&m);getchar();
		time=b/a*60;
		if(time>=60)
		{
			while(time>=60)
			{
				if(c-1<0)
				{
					c+=24;
					c--;
				}
				else
				{
					c--;
				}
				time-=60;
			}
		}
		
		if(time>0)
		{
			c--;
			time=60-time;
			m+=time;
			while(m>=60)
			{
				c++;
				m-=60;
			}
		}
		c=c%24;
		if(c<0)
		{
			c+=24;
		}
		
		
		printf("Case #%d: ",i);
		if(c<10){
		printf("0");
		}
		printf("%d:",c);
		if(m<10){
		printf("0");
		}
		printf("%d\n",m);
		
	}
	return 0;
}
