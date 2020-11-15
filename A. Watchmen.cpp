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
map<ll,ll>P1,P2;
map<pair<ll,ll>,ll>P;

int main(){
	speed;
	ll cas,a,b,ans=0;
	cin>>cas;
	while(cas--){
		cin>>a>>b;
		ans +=P1[a];
		P1[a]++;  //count ,how many same numbers appears
		
		//cout<<P1[a]<<endl;
		ans +=P2[b]; 
		P2[b]++;	//count ,how many same numbers appears.
		
		ans -=P[make_pair(a,b)];
		P[make_pair(a,b)]++; // count ,how many same pair appears.
		
	}
	cout<<ans<<endl;
	return 0;
}

		

