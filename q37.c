#include<stdio.h>
void main(){
    int n,count=0;
    printf("enter a number\n");
    scanf("%d",&n);
    while(n>=1){
        if(n%10==7){
            count++;
        }
        n=n/10;
    }
    printf("digit 7 is %d times in given number",count);
}