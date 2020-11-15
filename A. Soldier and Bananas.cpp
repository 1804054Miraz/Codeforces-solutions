#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,w;
	long long n;
	scanf("%d%lld%d",&k,&n,&w);
	long long sum=0;
	sum = w*(w+1)/2;
	sum = k*sum;
	if(sum-n>0)
	printf("%lld\n",sum-n);
	else 
	printf("0\n");
}
