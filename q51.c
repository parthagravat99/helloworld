#include<stdio.h>
void main(){
    int i,j,w,h;
    printf("enter height of pattern\n");
    scanf("%d",&h);
    printf("enter weight of pattern\n");
    scanf("%d",&w);
    for(i=1;i<=h;i++){
        for(j=1;j<=w;j++){
            printf("*");
        }
        printf("\n");
    }
}