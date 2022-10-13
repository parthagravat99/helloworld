#include<stdio.h>

int main(){
    int i,n;
    char c;
    do{
        printf("enter a number:");
        scanf("%d",&i);

        n=i*i;

        printf("square of %d is %d\n",i,n);

        printf("do you want to continue?: y/n\n");
        scanf(" %c",&c); 
    }while(c=='y'|| c=='Y');
    return 0;
}