#include<stdio.h>

int main(){
    long long i,input,angka;
    
    scanf("%lld",&input);
    
    for(i=1;i<=input;i++){
        scanf("%lld",&angka);
        
        if(angka<=2147483647){
            printf("Case #%lld: integer",i);
        }
        if(angka<=9223372036854775807){
            printf("Case #%lld: long long",i);
        }    
    }
    getchar();
    return 0;
}