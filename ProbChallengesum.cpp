#include<stdio.h>
int main(){
	long long int a,b,x,z,temp1,rem,revnum=0,rem2,revsum=0;
	long long int input[100];
	int casenum;
	scanf("%d", &casenum);

	for (a=1;a<=casenum; a++){
		scanf("%lld", &input[a]);
	}
	
	for (a=1;a<=casenum; a++){
		printf("Case #%lld: ", a);
		printf("%lld ", input[a]);
		b=input[a];
	while (b != 0){
			rem = b%10;
			revnum=revnum*10 +rem;
			b=b/10;
		} printf("%lld ", revnum);
	
	temp1=revnum+input[a];
	x=temp1;
	printf("%lld ", x);
	
	
	while (x != 0){
			rem2 = x%10;
			revsum=revsum*10 +rem2;
			x=x/10;
		} 
		
		printf("%lld\n", revsum);

	input[a]=0;
	revnum=0;
	rem=0;
	rem2=0;
	revsum=0;
	
	
	}
		return 0;
	}
