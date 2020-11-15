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
	ll i,n,od,ev;
	cin>>n;
	ll ar[n];
	od = ev = 0;
	for(i=0;i<n;i++){
		cin>>ar[i];
		if(ar[i]%2){
			od++;
		}
		else 
		ev++;
	}
	if(od>0)
	cout<<"First\n";
	else
	cout<<"Second\n";
	
	return 0;
}

