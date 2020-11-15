///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define 	ll long long int
#define 	pb push_back

#define 	speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double pi = acos(-1.0);
ll 	mx =-2147483648;
int main(){
	int n,m;
	ll mn,a;
	
	cin>>n>>m;
	while(n--){
		mn = 2147483648;
		for(int i=0;i<m;i++){
		cin>>a;
		mn = min(mn,a);
	}
	//cout<<mn<<endl;
	mx = max(mn,mx);
}
cout<< mx<<endl;
	
	return 0;
}

