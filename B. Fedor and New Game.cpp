///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define 	ll long long int
#define 	pb push_back
#define 	sc scanf
#define 	pf printf
int main(){
	
	int n,m,k,a;
	cin>>n>>m>>k;
	int ar[m+1];
	for(int i=0;i<=m;i++){
		cin>>ar[i];
	}
	int cn=0;
	for(int i=0;i<m;i++){
		a = (ar[m]^ar[i]);
		if(__builtin_popcount(a)<=k)/// the function count how many one has in the binary representation of the num.
		cn++;
		//cout<<__builtin_popcount(a)<<endl;
		//a = a>>1;
		//cout<<a<<" ";
	}
	cout<<cn<<endl;
	return 0;
}
