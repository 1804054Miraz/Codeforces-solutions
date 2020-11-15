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
	int n,i,j,a,mx=0,b;
	cin>>n;
	while(n--){
	string s;
	cin>>s;
	int sz = s.size();
	for(i=sz-1;i>=0;i--){
		if(s[i]=='R')
		break;
	}
	for(j=0;j<sz;j++){
		if(s[j]=='R')
		break;
	}
	j++;
	//cout<<j<<endl;
	mx=0;
	int dis = max(sz-i,j);
	int flag=0;
	for(i=sz-1;i>=0;i--){
		if(flag==1){
			b = a;
		}
		if(s[i]=='R'){
		a = i;
		if(flag==1){
			mx = max(mx,b-a);
		}
		flag=1;
	}
	}
	dis = max(mx,dis);
	cout<<dis<<endl;
}

	return 0;
}

