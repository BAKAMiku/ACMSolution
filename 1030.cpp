#include <stdio.h>
int main(){
    int m,n,i;
    scanf("%d %d",&m,&n);
    i=(m>n?n:m);
    while(!(m%i==0&&n%i==0)){
        i--;
    }
    printf("%d",i);
}