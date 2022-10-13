#include<stdio.h>
void main(){
    int n,m,l,sum=0,mul,c=0,i;
    printf("enter a number\n");
    scanf("%d",&n);
    m=l=n;
    while(n>=1){
        c++;
        n=n/10;
    }
    while(m>=1){
        mul=1;
        for(i=1;i<=c;i++){
            mul=mul*(m%10);
        }
        sum=sum+mul;
        m=m/10;
    }
    if(sum==l){
        printf("number is armstrong");
    }else{
        printf("number is not armstrong");
    }
    
}