#include<stdio.h>
void main(){
    int i,j,k;
    for(i=1;i<=9;i++){
        k=1;
        for(j=1;j<=9;j++){
            if(i<=5 && j>=6-i && j<=i+4){
                printf("%d",k);
                if(j<5){
                    k++;
                }else{
                    k--;
                }
            }else if(i>5 && j>=i-4 && j<=14-i){
                printf("%d",k);
                if(j<5){
                    k++;
                }else{
                    k--;
                }
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}