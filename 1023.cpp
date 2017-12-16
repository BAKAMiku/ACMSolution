#include <stdio.h>
int main(){
    char ch1,ch2,ch3,t;
    ch1=getchar();
    ch2=getchar();
    ch3=getchar();
    if(ch1>ch2){
        t=ch2;
        ch2=ch1;
        ch1=t;
    }
    if(ch1>ch3){
        t=ch3;
        ch3=ch1;
        ch1=t;
    }
    if(ch2>ch3){
        t=ch3;
        ch3=ch2;
        ch2=t;
    }
    printf("%c %c %c",ch1,ch2,ch3);
    return 0;
}