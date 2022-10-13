#include<stdio.h>
int main(){
    float r,v;
    printf("enter a number:");
    scanf("%f",&r);
    if(r>0){
        v=(1.3333)*3.1429*r*r*r;
        printf("volume of sphere for given5 radius is %f\n",v);
        }else{
            printf("enter valid radius value.");
        }
    return 0;
}