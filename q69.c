#include<stdio.h>
void main(){
    int i,j,k;
    for(i=1;i<=7;i++){
        k=65;
        for(j=1;j<=13;j++){
            if(j<=8-i || j>=6+i){
                printf("%c",k);
            }else{
                printf(" ");
            }
        if(j<=6){
            k++;
        }else{
            k--;
        }
        }
    printf("\n");
    }
}