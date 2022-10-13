#include<stdio.h>
#include<stdbool.h>
void main(){
    int i,n;
    bool count=false;
    printf("enter a number\n");
    scanf("%d",&n);
 for(i=2;i<n;i++){
        if(n%i==0){
            count=true;
            break;
        }
    }
    for(i=2;i<n;i++){
        if(n%i==0){
            count=true;
            break;
        }
    }
    if(count){
        printf("number is composite\n");
    }else{
        printf("number is prime\n");
    }
}