#include<stdio.h>
int main(){
	long long f[56];
	f[0]=0;f[1]=1;f[2]=2;f[3]=3;
	int i,n;
	for(i=4;i<56;i++)
		f[i]=f[i-1]+f[i-3];
	while(scanf("%d",&n)!=EOF&&n!=0)
		printf("%lld\n",f[n] );
}
