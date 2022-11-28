//looping in c languages
#include<stdio.h>
int l=40;
int h=32;
int main(){
    if(l<20){//if the condition is true then the block of code is excuted
        printf("l is large");

    }else{//if is fail then else is excuted
        printf("l is small");

    }//short hand if repsentation 
    (h<30)? printf("this is small"):printf("this is big");
}