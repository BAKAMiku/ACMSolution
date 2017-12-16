#include <stdio.h>
int main(){
    float x;
    scanf("%f",&x);
    if(x<0) printf("%.2f",-x);
    else    printf("%.2f",x);
    return 0;
}