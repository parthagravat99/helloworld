#include<stdio.h>
int main(){
    int i;
    float m,n;
    printf("enter 2 float numbers:");
    scanf("%f",&m);
    scanf("%f",&n);
    if(m<n){
        for(i=(m+1);i<=n;i++){
            printf("%d ",i);
        }
    }else{
        for(i=m;i>=n;i--){
            printf("%d ",i);
        }
    }
    return 0;
}