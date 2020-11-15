///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define 	ll long long int
#define 	pb push_back

#define 	mn -2147483648
#define 	speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double pi = acos(-1.0);
const ll inf = 1e17 + 7;
map<int,int>dup;
int main(){
	int n,mx=0;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
		//mx = max(ar[i],mx);
		dup[ar[i]]++;
	}
	set<int>st(ar,ar+n);
	for(auto x :st){
		if(dup[x]%2){
			mx=1;
		}
	}
	if(mx==1)
	cout<<"Conan\n";
	else
	cout<<"Agasa\n";
	return 0;
}

