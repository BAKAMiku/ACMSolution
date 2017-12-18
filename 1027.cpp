#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x==1)    {
        printf("no");
        return 0;
    }
    for(int i=2;i<x;i++){
        if(x%i==0)  {
            printf("no");
            return 0;
        }
    }
    printf("yes");
    return 0;
}