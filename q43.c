#include<stdio.h>
#include<stdbool.h>
void main(){
    int i,j;
    bool k;
    for(i=2;i<=300;i++){
        k=false;
        for(j=2;j<i;j++){
           if(i%j==0){
               k=true;
               break;
           }
               
        }
        if(!k){
            printf("%d\n",i);
        }
    }
}    