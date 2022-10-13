#include<stdio.h>
void main(){
    int p,n,i;
    float r,interest;

    for(i=1;i<=3;i++){
        printf("enter principle amount:");
        scanf("%d",&p);
        printf("enter enter number of years:");
        scanf("%d",&n);
        printf("enter rate of interest:");
        scanf("%d",&r);

        interest=(p*n*r)/100;

        printf("interest for set %d is %f rs\n",i,interest);
    }
}