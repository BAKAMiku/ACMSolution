#include<stdio.h>
int main()
{
    int i,n,sum,p;
    while(~scanf("%d",&n))
    {
        sum=1;
        for(i=0;i<n;i++)
        {
            scanf("%d",&p);
            if(p%2==1)
                sum*=p;
        }
        printf("%d\n",sum);
    }
    return 0;
}