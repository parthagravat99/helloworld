#include<stdio.h>
void main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(i<5 && (j<=1 || j==i)){
                printf("%d ",j);
            }else if(i==5 && (j<=5 && j>=1)){
                printf("%d ",j);
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}