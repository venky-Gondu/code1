//my first programe in c
#include<stdio.h>
//declering variables 
int l=40;
int m=20,z=33,p=70;//declering multiple vriables
 int k=-32769;//declering constants 
 float a=1234.3456;
int main(){
    printf("hello world!\n");
    printf("i love c");
    //we can not print variables vlues  by using printf function
    // so we need to use format specifiers to print values
    //printf("%d",l+m+z+p );
    printf("%u",k);
    printf("%d",k);
    printf("l=%d,m=%d,z=%d",l,m,z);//formated output
    printf("%06d",l);
    printf("%5.2f",a);
    return 0;
}