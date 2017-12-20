#include<stdio.h>
int main()
{
    int x;
    float y;
    while((scanf("%d",&x)!=EOF)&&(x!=0)){
        int pos=0,neg=0,zero=0;
        for(int i=0;i<x;i++){
            scanf("%f",&y);
            if(y>0) pos++;
            else if(y<0)   neg++;
            else    zero++;

        }
        printf("%d %d %d\n",neg,zero,pos);
    }
    return 0;
}
