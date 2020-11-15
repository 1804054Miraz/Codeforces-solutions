#include<bits/stdc++.h>
using namespace std;
bool visit[200001];
int main()
{
	int ns,nt;
	cin>>ns>>nt;
	string s,t;
	cin>>s>>t;
	int i,j,k;
	if(s==t){
		cout<<"YES\n";
		return 0;
	}
	for(i=0;(s[i]!='*' && i<ns);i++){
		if(s[i]!=t[i]){
			cout<<"NO\n";
			return 0;
			
		}
		visit[i]=true;
	}
		for(k=nt-1,j=ns-1;(s[j]!='*' && j>=0);j--,k--){
			if(visit[k]==true || s[j]!=t[k]){
				cout<<"NO\n";
				return 0;
			}
		}
	if(s[i]=='*' && s[j]=='*'){
		cout<<"YES\n";
	}
	else {
		cout<<"NO\n";
	}
			
		
	
	return 0;
}

