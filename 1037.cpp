#include<stdio.h>
int main()
{
    int min,max,temp;
    while(~scanf("%d %d",&min,&max))
    {
        int oddsum=0,evensum=0;
        if(min>max){
            temp=max;
            max=min;
            min=temp;
        }
        for(int i=min;i<=max;i++){
            if(i%2==0)  evensum+=i*i;
            if(i%2!=0)  oddsum+=i*i*i;
        }
        printf("%d %d\n",evensum,oddsum);
    }
    return 0;
}