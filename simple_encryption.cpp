#include <stdio.h> 
#include <string.h>
void key(char a, int b){
	if(a>=97){
		if(a+b>122) printf("%c",a+b-26);
		else printf ("%c",a+b);
	}
	else if(a>=65){
		if(a+b>90) printf("%c",a+b-26);
		else printf("%c",a+b);
	}		
}
int main(){
	char a[1001];
	int t,b;
	
	scanf("%d",&t);getchar();
	for (int j=1;j<=t;j++){
		scanf("%d",&b);getchar();
		gets(a);
		printf("Case #%d: ",j);
		for(int i=0;i<strlen(a);i++){
			b=b%26;
			if( (a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z')){
					key(a[i],b);
			}
			else{
				printf("%c",a[i]);
			}
		}
				printf("\n");
	}
	return 0;
}
