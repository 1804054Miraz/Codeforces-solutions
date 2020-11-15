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
	int n,x,y,cn=0;
	cin>>n>>x>>y;
	int ar[n];
	for(int i=0;i<n;i++){
			cin>>ar[i];
		}
	if(y<x){
		cout<<n<<endl;
	}
	else if(y>=x)
	{
		//sort(ar,ar+n);
	for(int i=0;i<n;i++){
		if(i%2==0){
			if(ar[i]<=x){
			cn++;
			}
		}
	}
	cout<<cn<<endl;
}
	return 0;
}

