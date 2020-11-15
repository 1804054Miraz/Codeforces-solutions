///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define READ(n) freopen("Gfg.txt","r",stdin)
#define 	ll long long int
#define reset(a, b) memset(a, b, sizeof(a))
#define 	pb push_back
#define 	mx 2147483648
#define 	mn -2147483648
#define 	speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double pi = acos(-1.0);
const ll inf = 1e17 + 7;

int main(){
	speed;
	int t,n,m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		if(n%2==0){
		cout<<(n/2)*m<<endl;
	}
	else if(n%2  and m%2){
		cout<<(n/2)*m+(m/2)+1<<endl;
	}
	else if(n%2 and m%2==0){
		cout<<(n/2)*m+m/2<<endl;
	}
}
	//freopen("Gfg.txt","w",stdout);//Write in the Gfg.txt file
	//freopen("Gfg.txt","r",stdin);//Read from the file Gfg.txt file
	//use assert function
	return 0;
}

