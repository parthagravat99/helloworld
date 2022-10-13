#include<stdio.h>
int main(){
    int i,j,m=21;
    while(i>0){
    printf("enter your number between 1 to 4:");
    scanf("%d",&i);
    m=m-i;
    if(m==0){
        break;
    }
    else if(m>=10){
            m=m-4;
            printf("computer choice is 4\n");
    }
    else if(m<10 && m>5){printf("%d\n",m);
            j=m-6;
            m=m-j;
            printf("computer choice is %d\n",j);
    }else if(m<=5 || m>=1){
            j=m-1;
            m=m-j;      
            printf("computer choice is %d\n",j);
    }
    printf("remaining matchstics are %d\n",m);
    

    } printf("you lost.better luck next time.");
    return 0;
}