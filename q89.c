#include<stdio.h>
int main(){
    int i,j,k,l,sum=0;
    printf("enter 2 numbers:\n");
    scanf("%d",&i);
    scanf("%d",&j);
    for(k=i;k>=1;k=k/2){
        printf("%d\t%d\n",k,j);
        if(k%2==1){    
            sum=sum+j;
        }
       j=j*2;
    }
    printf("answer is %d",sum);
    return 0;
}