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
	ll n,m,i,j;
	cin>>n>>m;
	ll a[n],b[m],c[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(j=0;j<m;j++){
		cin>>b[j];
	}
	c[0]=a[0];
	for( i=1;i<n;i++){
		c[i] =c[i-1]+a[i];
	}
	c[-1]=-1;
	for(j=0;j<m;j++){
		ll ind = upper_bound(c,c+n,b[j])-c;
		if(b[j]==c[ind-1]){
			ind = ind-1;
		}
		if(ind==0){
			cout<<1<<" "<<b[j]<<endl;
		}
		else
		{
			cout<<ind+1<<" "<<b[j]-c[ind-1]<<endl;
		}
	}
	return 0;
}

