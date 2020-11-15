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
bool mark[100009];
int main(){
	int n,ind,a=0;
	cin>>n;
	ind = n - 11;
	string s;
	cin>>s;
	int eight=0;
	for(int i=0;i<=ind;i++){ //here we count '8' until n-10 digit i.e. the first digit of last 11 digits.
		if(s[i] == '8'){
			eight++;
		}
	}
	if(eight>ind/2){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}
	
	return 0;
}

