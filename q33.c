#include<stdio.h>
void main(){
    int i,n,m,mul=1;
    printf("enter numbers\n");
    scanf("%d",&m);
    printf("enter value of power\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        mul=mul*m;
    }
    printf("answer is %d",mul);
}