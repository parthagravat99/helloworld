#include<stdio.h>
void main(){
    int i,j;
    for(i=1;i<=9;i++){
        for(j=1;j<=10;j++){
            if(i<=5 && (j==i || j==11-i)){
                printf("*");
            }else if(i>5 && (j==10-i || j==i+1)){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
} 