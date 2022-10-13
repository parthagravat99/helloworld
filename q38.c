#include<stdio.h>
void main(){
    int n,reverse=0;
    printf("enter a number\n");
    scanf("%d",&n);
    while(n>=1){
        reverse=reverse*10+(n%10);
        n=n/10;
    }
    printf("reverse of given integers is %d",reverse);
}