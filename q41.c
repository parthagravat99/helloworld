#include<stdio.h>
void main(){
    int i,j=0,k=1,l;
    for(l=1;l<=10;l++){
    i=j;
    j=k;
    k=i+j;
    printf("%d\n",i);
    }
}