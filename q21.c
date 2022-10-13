#include<stdio.h>
int main(){
    int n,i,c=0,t=0;
    float m,psum=0,nsum=0,pavg,navg;
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
    pavg=psum/c;
    navg=nsum/t;
    printf("average of positive numbers is %f and nagative numbers is %f\n",pavg,navg);
    return 0;
}