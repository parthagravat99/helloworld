#include<stdio.h>
#include<math.h>
int main(){
    int a;
    float c,b,d;
    printf("Enter customers a/c no.:");
    scanf("%d",&a);
    printf("Enter customers credit limit:");
    scanf("%f",&c);
    printf("Enter current balance:");
    scanf("%f",&b);
    
    d=c/2;
    printf("New credit limit for a/c no. %d is Rs.%f",a,d);
    if(b>=d){
        printf("\nYou have low balance than your credit limit.");
    }


    return 0;
}