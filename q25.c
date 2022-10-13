#include<stdio.h>
void main(){
    int n,g;
    srand(time(0)); /* seed random number generator */
    n = rand() % 9 + 0; /* random number between 1 and 100 */
    do{
        printf("guess a number between 0 to 9\n");
        scanf("%d",&g);

        if(g>n){
            printf("guess a lower number\n");
        }else if(g<n){
            printf("guess a higher number\n");
        }else{
            printf("congratulations!!!\n");
        }
    }while(g!=n);
}