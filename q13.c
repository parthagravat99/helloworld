#include<stdio.h>
int main(){
    int i,m,n,t,sum=0;
    printf("enter 1st number:");
    scanf("%d",&m);
    printf("enter 2nd number:");
    scanf("%d",&n);
    if(m>n){
        t=m;
        m=n;
        n=t;
    }
    for(i=m;i<=n;i++){
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}