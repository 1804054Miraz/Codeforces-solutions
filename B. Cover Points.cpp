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
	int n,x,y;
	ll sum,mx =-2147483648;
	cin>>n;
	while(n--){
		cin>>x>>y;
		sum = x+y;
		mx = max(mx,sum);
	}
	cout<<mx<<endl;
	return 0;
}

