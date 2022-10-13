#include<stdio.h>
void main(){
    int n,m,d;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("enter a second number\n");
    scanf("%d",&m);
    if(m>n){
        d=m-n;
    }else{
        d=n-m;
    }
    printf("range is %d\n",d);
}