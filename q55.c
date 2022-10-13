#include<stdio.h>
void main(){
    int i,j;
    for(i=1;i<=10;i++){
        for(j=1;j<=9;j++){
           if(i<=5 && j>=1 && j<=(2*i)-1){
               printf("*");
           }else if(i>5 && j>=1 && j<=21-(2*i)){
               printf("*");
           }else{
               printf(" ");
           }
        }
        printf("\n");
    }
    }