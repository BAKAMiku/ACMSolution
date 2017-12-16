#include <stdio.h>
int main(){
    char x;
    x=getchar();
    if(x=='y')  printf("a");
    else if(x=='z') printf("b");
    else{
        x=x+2;
        printf("%c",x);
    }
}