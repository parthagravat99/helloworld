#include<stdio.h>
void main(){
    int i,n,sum=0;
   do{
        printf("enter a number:");
        scanf("%d",&i);
        sum=sum+i;
    } while(i!=0);
    printf("sum of entered number is %d",sum);
}