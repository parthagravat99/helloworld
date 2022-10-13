#include<stdio.h>
void main(){
    int i;
    float n,sum=0,fact=1;
    for(i=1;i<=7;i++){
        fact=fact*i;
        n=i/fact;
        sum=sum+n;
    }
    printf("sum of first seven terms is %f",sum);
}