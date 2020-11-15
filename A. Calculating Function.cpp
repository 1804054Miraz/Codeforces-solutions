#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int  n,od,ev,res;
	scanf("%lld",&n);
	if(n%2==0){
		ev = n/2;
		od = n/2;
		res = (ev*ev+ev)-(od*od);
	}
	else 
	{
		ev = n/2;
		od = n/2+1;
		res =  (ev*ev+ev) - (od*od);
	}
	printf("%lld\n",res);
}
