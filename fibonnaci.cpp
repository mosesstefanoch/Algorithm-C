#include<stdio.h>
int fibonnaci(long long int n)
{
	if(n==0) return 0;
	if(n==1) return 1;
	if(n==2) return 2;
	long long int fib[n+1],sum=2;
	fib[1]=1,fib[2]=1;
	for(int i=3;i<=n;i++)
	{
		fib[i]=(fib[i-1]+fib[i-2])%1000000009;
		sum=((sum%1000000009)+fib[i])%1000000009;
	}
	return sum;
}
int main(){
	int t;
	long long int n;
	scanf("%d",&t);
	for (int i=1;i<=t;i++)
	{
		scanf("%lld",&n);
		printf("Case #%d: %lld\n",i,fibonnaci(n));
	}
	return 0;
}
