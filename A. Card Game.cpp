///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define 	ll long long int
#define 	pb push_back
#define		 mx 2147483648
#define 	mn  -2147483648
int main(){
	int n,k1,k2,test,a,b;
	int k1_mx,k2_mx;
	
	cin>>test;
	while(test--){
		k1_mx = k2_mx = mn;
		cin>>n>>k1>>k2;
		while(k1--){
			cin>>a;
			if(a>k1_mx)
			k1_mx = a;
			
		}
		while(k2--){
			cin>>b;
			if(k2_mx<b)
			k2_mx = b;
		}
	if(k1_mx>k2_mx)
	cout<<"YES\n";
	else
	cout<<"NO\n";
	}
	
	return 0;
}

