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
	ll n,l;
	cin>>n>>l;
	ll ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	
	}
	sort(ar,ar+n);
	for(int i=0;i<n;i++){
		cout<<ar[i]<<" ";
	}
	cout<<endl;
	for(int i=1;i<n;i++){
		ar[i-1]=ar[i]-ar[i-1];
		cout<<ar[i-1]<<" ";
	}
	
	return 0;
}

