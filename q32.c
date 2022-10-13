#include<stdio.h>
void main(){
    int i,n,fact=1;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        fact=fact*i;
    }
    printf("%d! = %d",n,fact);
}