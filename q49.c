#include<stdio.h>
void main(){
    int i,j,n;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++){
        for(j=1;j<=n;j++){
            printf("%d ",j);
        }
    printf("\n");
    }
}