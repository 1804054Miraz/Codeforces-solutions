///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define 	ll long long int
#define 	pb push_back
#define 	mx 2147483648
#define 	mn -2147483648
#define 	speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double pi = acos(-1.0);
const ll inf = 1e17 + 7;

int main(){
	int n,d,test;
	cin>>test;
	while(test--){
	cin>>n>>d;
	int  p = n/2;
	//cout<<p<<endl;
	if(n==d){
		p=d;
	}
	else if(p!=0 and d%(p+1)!=0){
		
		d =  d/(p+1) + 1;
		
		p = n-p;
	}
	else if(p!=0 and d%(p+1)==0)
	{
		
		d = d/(p+1);
		
		p = n-p;
	}
	//cout<<d<<endl;
	if(d<=p){
		cout<<"YES\n";
	}
	else 
	cout<<"NO\n";
}
		
	
	
	return 0;
}

