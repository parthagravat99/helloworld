#include<stdio.h>
void main(){
    int n,sum=0;
    printf("enter a number\n");
    scanf("%d",&n);
    while(n>=1){
        sum=sum+(n%10);
        n=n/10;
    }
    printf("sum of given integers is %d",sum);
}