#include<stdio.h>
int main(){
    int n,i,c=0,t=0;
    float m,psum=0,nsum=0;
    printf("enter n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        printf("enter number:");
        scanf("%f",&m);
        if(m>=0){
            psum=psum+m;
            c++;
        }else{
            nsum=nsum+m;
            t++;
        }
    }
    printf("%d positive and %d nagetive numbers are entered by you.\n",c,t);
    printf("sum of positive numbers is %f and sum of negative numbers is %f\n",psum,nsum);
    return 0;
}