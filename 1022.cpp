#include <stdio.h>
int main(){
    char ch;
    ch=getchar();
    if(ch>=97&&ch<=122){
        printf("%c",ch-32);
    } else{
        printf("%c",ch);
    }
    return 0;
}