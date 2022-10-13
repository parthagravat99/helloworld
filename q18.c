#include<stdio.h>
int main(){
    int i,sum=0;
    for(i=12;i<=102;i++){
        if(i%10==2){
            sum=sum+i;
        }
    }
    printf("sum of given series is %d\n",sum);
    return 0;
}