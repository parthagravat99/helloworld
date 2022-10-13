#include<stdio.h>
void main(){
    int i,j,k;
    for(i=1;i<=7;i++){
        k=1;
        for(j=1;j<=7;j++){
            if(i<=4 && (j<=i || j>=8-i)){
                printf("%d",k);
            }else if(i>4 && (j<=8-i || j>=i)){
                printf("%d",k);
            }else{
                printf(" ");
            }
            if(j<4){
                k++;
            }else{
                k--;
            }
        }
        printf("\n");
    }
}