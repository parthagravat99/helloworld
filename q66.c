#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=6;i++){
        for(j=1;j<=13;j++){
            if((i==1 || i==6) && (j>=1 && j<=11)){
                printf("=");
            }else if((i>1 && i<6) && (j==1 || j==13)){
                printf("*");
            }else{printf(" ");}
        }printf("\n");
    }
    return 0;
}