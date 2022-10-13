#include<stdio.h>
#include<math.h>
int main(){
    int i,j=0,n=2;
    for(i=n;i<=1000000;i=i*2){
        j++;
    }
    printf("%d",j);
    return 0;
}