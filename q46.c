#include<stdio.h>
void main(){
    char blank,tab,new_line,c;
    while(c=getchar()!=EOF){
        if(c==' '){
            blank++;
        }
        if(c=='\n'){
            new_line++;
        }
        if(c=='\t'){
            tab++;
        }
    }
    printf("blanks=%d\nnew line=%d\ntabs=%d",blank,new_line,tab);
}