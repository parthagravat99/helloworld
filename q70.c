#include<stdio.h>
void main(){
    int i,j,k=1,l,n;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=i;j<=(n-1);j++){
            printf("\t");
        }
        for(l=1;l<=i;l++){
            printf("%d\t\t",k);
            k++;
        }
    printf("\n");
    }
}