#include <stdio.h>
int main(){
    int max,min;
    scanf("%d %d",&min,&max);
    if(max>min){
        int count=0;
        for(int i=min;i<=max;i++){
            int a=i/100;
            int b=(i-a*100)/10;
            int c=i-a*100-b*10;
            if(i==a*a*a+b*b*b+c*c*c)    count++;
        }
        printf("%d",count);
    } else{
        int t,count=0;
        t=max;
        max=min;
        min=t;
        for(int i=min;i<=max;i++){
            int a=i/100;
            int b=(i-a*100)/10;
            int c=i-a*100-b*10;
            if(i==a*a*a+b*b*b+c*c*c)    count++;
        }
        printf("%d",count);
    }
    return 0;
}