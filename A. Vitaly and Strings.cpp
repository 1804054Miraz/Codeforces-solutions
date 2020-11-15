#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,t;
	cin>>s>>t;
	int i,sz;
	sz = s.size();
	for(i=sz-1;s[i]=='z';i--){
		s[i]='a';
	}
	s[i]++;
	cout<<(s<t?s:"No such string")<<endl;
}

