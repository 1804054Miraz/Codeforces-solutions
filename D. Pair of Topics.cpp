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
	ll n;
	cin>>n;
	ll a[n],b[n],c[n];
		for(int j=0;j<n;j++){
			cin>>a[j];
		}
		for(int j=0;j<n;j++){
			cin>>b[j];
			
		}
		for(int i=0;i<n;i++){
			c[i]=a[i]-b[i];
			//cout<<c[i]<<" ";
		}
		//cout<<endl;
		sort(c,c+n);
		ll pos=0;
	for(int i=0;i<n;i++){
		if(c[i]<=0) continue;
	pos +=i- (lower_bound(c,c+n,-c[i]+1)-c);
	}
	cout<<pos<<endl;
	
	return 0;
}

