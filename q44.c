#include<stdio.h>
void main(){
    int i,j,k;
    for(i=1;i<=100;i++){
        for(j=1;j<=100;j++){
            for(k=1;k<=100;k++){
                if(k*k==i*i+j*j && i<j && j<k){
                    printf("%d %d %d\n",i,j,k);
                }
            }
        }
    }
}