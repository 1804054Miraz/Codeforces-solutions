///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define 	ll long long int
#define 	pb push_back
#define 	mn -2147483648
#define 	speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double pi = acos(-1.0);
const ll inf = 1e17 + 7;

int main(){
	speed;
	ll test,n,x,i;
	cin>>test;
	while(test--){
		cin>>n>>x;
		ll mx = 0;
		ll ar[n];
		ll flag = 0;
		for(i=0;i<n;i++){
			cin>>ar[i];
			if(ar[i]==x){
				flag = 1;
				mx = x;
			}
			if(flag==0){
			mx = max(mx,ar[i]);
		}
			
		}
		//double res = (double)x/mx;
		if(mx>x){
			cout<<2<<endl;
		}
		else if(mx==x){
			cout<<1<<endl;
		}
		else if(x%mx==0){
			cout<<x/mx<<endl;
		}
		else if(x%mx!=0){
			cout<<(x/mx)+1<<endl;
		}
	}
	return 0;
}

