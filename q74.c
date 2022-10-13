#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <math.h>
int main(){
    int n,m,o,r,val,k,a,t,s,g=0,valm,l,b,f;
    m=n=o=12;
    val=valm=0;
    k=l=0;
    char hexa[100];
    while(n!=0){
        r=n%2;
        a=pow(10,k);
        val=(r*a)+val;
        n=n/2;
        k++;
    }
    while(m!=0){
        s=m%8;
        b=pow(10,l);
        valm=(s*b)+valm;
        m=m/8;
        l++;
    }
     while(o!=0){
        t=o%16;
        if (t < 10)
            hexa[g++] = 48 + t;
        else
            hexa[g++] = 55 + t;
        o=o/16;
       }
    printf("binery=%d\n",val);
    printf("octal=%d\n",valm);
     for (f = g-1; f >= 0; f--)
            printf("hexa=%c\n", hexa[f]);
    return 0;
    
}