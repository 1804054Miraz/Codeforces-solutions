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
	int n;
	cin>>n;
	ll a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	b[0]=a[0]-1;
	
	for(int i=1;i<n;i++){
		b[i] = b[i-1]+(a[i]-1);
		//cout<<b[i]<<endl;
	}
	for(int i=0;i<n;i++){
		//cout<<b[i]<<" ";
		if(b[i]%2==0){
			cout<<2<<endl;
		}
		else 
		cout<<1<<endl;
	}
	return 0;
}

