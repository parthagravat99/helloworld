#include<stdio.h>
#include<math.h>
void main(){
    int n,k=0,sum=0;
    printf("enter a binary number:");
    scanf("%d",&n);
    printf("\n");
    while(n!=0){
        sum=sum+(n%10)*pow(2,k);
        n/=10;
        k++;
    }
    printf("%d",sum);
}