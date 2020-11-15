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
	speed;
		ll n,i,j,m;
		cin>>n>>m;
		ll a[n],b[m];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		for(j=0;j<m;j++){
			cin>>b[j];
		}
		sort(a,a+n);
	ll ind;
	for(i=0;i<m;i++){
		ind = upper_bound(a,a+n,b[i])-a;
		cout<<ind<<" ";
}
	return 0;
}

