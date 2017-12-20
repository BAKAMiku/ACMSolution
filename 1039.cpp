#include<stdio.h>
#include <math.h>
int main()
{
    float num;
    int time;
    while(scanf("%f",&num)!=EOF){
        scanf("%d",&time);
        float sum=num;
        for(int i=1;i<time;i++){
            num=sqrt(num);
            sum+=num;
        }
        printf("%.2f\n",sum);
    }
}