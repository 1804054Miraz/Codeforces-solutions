///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define 	ll long long int
#define 	pb push_back
#define 	sc scanf
#define 	pf printf
int main(){
	ll n;
	cin>>n;
	vector<ll>a(n);
	ll sum=0,s;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum +=a[i];
	}
	ll cn=0,ans=0;
	//cout<<sum<<endl;
	
	if(sum%3)
	{
		cout<<0<<endl;
		return 0;
	}
	else 
	{
		s = sum/3;
		sum = 0;
		
		for(int i=0;i<n-1;i++){
			sum +=a[i];
			if(sum == 2*s)
			ans += cn;
			if(sum == s)
			cn++;
			
			//cout<<sum<<" ";
		}
	}
	cout<<ans<<endl;	
	return 0;
}
