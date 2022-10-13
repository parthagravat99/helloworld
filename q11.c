#include<stdio.h>
int main(){
    int i,sum=0;
    for(i=1;i<=15;i++){
        sum=sum+(2*i);
    }
    printf("%d",sum);
    return 0;
}