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
	int n,m;
	cin>>n>>m;
	set<string>set1,set2,setall;
	for(int i=0;i<n;i++){
		string s1;
		cin>>s1;
		set1.insert(s1);
		setall.insert(s1);
	}
	for(int i=0;i<m;i++){
		string s2;
		cin>>s2;
		set2.insert(s2);
		setall.insert(s2);
	}
	int sz = setall.size();
	if((n+m-sz)%2)
	m--;
	if(n>m){
		cout<<"YES\n";
	}
	
	else
	{
		
		cout<<"NO\n";
	}

	
	return 0;
}

