///bad problem
#include<bits/stdc++.h>
using namespace std;
int main(){

	string s[22],t[22];
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	for(int j=0;j<m;j++){
		cin>>t[j];
	}
	int q;
	cin>>q;
	while(q--){
		int x;
		cin>>x;
		cout<<s[(x-1)%n]+t[(x-1)%m]<<endl;///since index start from = 0;1%10=1 convert it 1-1%10 = 0;
	}
}



