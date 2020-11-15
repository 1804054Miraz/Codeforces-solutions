#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a;
	string ans;
	cin>>n;
	if(n%4==0 || n%7==0 || n%47==0 || n%74==0 || n%444==0 || n%474==0 || n%477==0 ){
		cout<<"YES\n";
		return 0;
	}
	a = n;
	while(a>0)
	{
		
		a = n%10;
		n = n/10;
		//cout<<a<<endl;
		if(a==0 && n==0){
			cout<<"YES\n";
		return 0;
	}
		else if(a==4){
		}
		else if(a==7){
		}
		else{
		cout<<"NO\n";
		return 0;
	}
		
		//
		//break;
	}
	
}
