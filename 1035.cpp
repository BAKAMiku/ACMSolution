#include <stdio.h>
int main(){
    int money,count=0;
    scanf("%d",&money);
    for(int i=1;i<=money/5;i++)
        for(int j=1;j<=money/3;j++)
            for(int k=1;k<=money;k++){
                if((i*5+j*3+k/3==money)&&(i+j+k==money)&&(k%3)==0)
                    count++;
            }
    printf("%d",count);
}