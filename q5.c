#include<stdio.h>
void main(){
    int i,n,j;
    for(i=1;i<=5;i++){
        printf("enter the number between 1 to 30:\n");
        scanf("%d",&n);
        if(n>=1 && n<=30){
            for(j=1;j<=n;j++){
                printf("*");
            }
        }else{
            printf("enter valid number.");
        }
        printf("\n");
    }
}