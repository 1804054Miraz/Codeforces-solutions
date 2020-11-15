#include<bits/stdc++.h>
using namespace std;
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int a,n,test;
	double p;
	cin>>test;
	while(test--){
		
	cin>>a;
	p = (double)360/(180-a);
	//cout<<p<<endl;
	n = p;
	cout<<n<<endl;
	if(p-n==0){
		cout<<"YES\n";
	}
	else 
	cout<<"NO\n";
}
}
