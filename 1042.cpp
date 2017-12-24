#include<stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    while(scanf("%d",&num)!=EOF){
        int sum=0;
        int *p=(int *)malloc(num* sizeof(int));
        for(int i=0;i<num;i++){
            scanf("%d",&p[i]);
            sum+=p[i];
        }
        int max=0,min=100;
        for(int i=0;i<num;i++){
            if(p[i]>=max){
                max=p[i];
            }
            if(p[i]<=min){
                min=p[i];
            }
        }
        float res=(sum-max-min)/(num-2.00);
        printf("%.2f\n",res);
        free(p);
    }
}
