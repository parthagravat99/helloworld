#include<stdio.h>
#include<math.h>
int main(){
    int a,b,n;


for(a=1;a<=500;a++)
    for(b=1;b<=500;b++)
        for(n=1;n<=500;n++)

            if(a<b && a*a + b*b == n*n)
            {   
                printf("%d, %d, %d\n",a,b,n);
            }        
return 0;
}