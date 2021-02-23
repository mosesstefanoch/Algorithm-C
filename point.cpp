#include<stdio.h>
int main()
{
  int testcase,number=0;
  int i,j;
  scanf("%d",&testcase);
  for(i=1 ; i<=testcase ; i++)
  {
    scanf("%d",&number);
    int x[number]={0};
    int y[number]={0};
    int flag[4]={0};
    for(j=1;j<=number;j++)
    {
      scanf("%d %d",&x[j],&y[j]);
      if(x[j] > 0 && y[j] > 0)
      {		
				flag[0]++;
			}
      if(x[j] < 0 && y[j] > 0)
      {		
				flag[1]++;
			}
      if(x[j] < 0 && y[j] < 0)
      {		
				flag[2]++;
			}
      if(x[j] > 0 && y[j] < 0)
      {		
				flag[3]++;
			}
    }
    if (flag[0] == number||flag[0] == number-1
      ||flag[1] == number||flag[1] == number-1
      ||flag[2] == number||flag[2] == number-1
      ||flag[3] == number||flag[3] == number-1)
      {
      printf("Case #%d: YES\n", i);
    }
    else
    {
      printf("Case #%d: NO\n", i);
    }
  }
}
