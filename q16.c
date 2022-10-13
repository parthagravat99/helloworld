#include<stdio.h>
int main(){
    int i,mul=1;
    for(i=1;i<=15;i++){
        if(i%2==1){
            mul=mul*i;
        }   
    }
    printf("%d",mul);
    return 0;
}