#include<stdio.h>
int main(){
    int i,j,k=1,l=65;
    for(i=1;i<=8;i++){
        for(j=1;j<=i;j++){
            if(i%2==1){
                printf("%c",l);
                l++;
            }else{
                printf("%d",k);
                k++;
            }
        }printf("\n");
    }
    return 0;

}