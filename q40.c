#include<stdio.h>
void main(){
    int m,n,i,sum=0;
    printf("enter a number\n");
    scanf("%d",&n);
    m=n;
    for(i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==m){
        printf("number is perfect");
    }else{
        printf("number is not perfect");
    }
}