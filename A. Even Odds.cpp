#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,k;
	cin>>n>>k;
	if(n%2==0){
		if(k<=n/2){
			cout<<k*2-1<<"\n";
		}
		else 
		cout<<(k-n/2)*2<<"\n";
	}
	else
	{
		if(k<=n/2+1){
			cout<<(k*2-1)<<"\n";
		}
		else 
		//printf("%I64d\n",;
		cout<<(k-n/2-1)*2<<"\n";
	}
}
