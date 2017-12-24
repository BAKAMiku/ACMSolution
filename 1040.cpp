#include<stdio.h>
#include <math.h>
int main()
{
    int num,n;
    scanf("%d",&num);
    for(int j=1;j<=num;j++){
        float sum=1,front;
        scanf("%d",&n);
        for(int i=1;i<=n-1;i++){
            front=pow(-1,i);
            sum=sum+front*1/(i+1);
        }
        printf("%.2f\n",sum);
    }
}
