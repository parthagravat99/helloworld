#include <stdio.h>
int main(){
    int n,i,sum=0;
    float avg;
    printf("enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;
        printf("%d",sum);
    }
    avg=sum/n;
    printf("average is %f",avg);
    return 0;
    }