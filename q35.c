#include<stdio.h>
void main(){
    int i=1;
    float n,sum=0,fact=1;
    while(1){
        fact=fact*i;
        n=i/fact;
        if(n<0.0000001){
            break;
        }
        sum=sum+n;
        i++;
    }
    printf("sum of terms is %f\n",sum);
    printf("%d",i);
}