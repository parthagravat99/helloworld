#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    double numbers=0, sum=0;    
    printf("Enter numbers: ");
    while(scanf("%lf", &numbers) != EOF){   
        sum=sum+numbers;
    }
    printf("\n %.2lf", sum);
}