#include<stdio.h>
#include<math.h>
int main(){
    char product;
    int i=0,j=0,k=0,l=0,m=0;
 

    while(product!=0){
    printf("\nenter product number:");
    scanf("%c",&product);
   
    switch(product){
        case '1':
            printf("products retail value is $2.98\n");
            i++; 
            printf("sold quantity of product is %d\n",i);
            break;

        case '2':
            printf("products retail value is $4.50\n");
            j++;
            printf("sold quantity of product is %d\n",j);
            break;

        case '3':
            printf("products retail value is $9.98\n");
            k++;
            printf("sold quantity of product is %d\n",k);
            break;

        case '4':
            printf("products retail value is $4.49\n");
            l++;
            printf("sold quantity of product is %d\n",l);
            break;

        case '5':
            printf("products retail value is $6.87\n");
            m++;
            printf("sold quantity of product is %d\n",m);
            break;
        }product=0;
        }
    return 0;
}