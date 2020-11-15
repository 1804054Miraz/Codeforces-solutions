#include<bits/stdc++.h>
using namespace std;
int main(){

	int n,dup=0,cn=0,i,j=0;
	cin>>n;
	string st;
	cin>>st;

	int ar[100000];
	for(i=0;i<st.size();i++){
		if(st[i]=='z'){
			ar[j++]=0;
		}
		else if(st[i]=='n'){
			ar[j++]=1;
		}
	}
	sort(ar,ar+j);
	for(i=j-1;i>=0;i--){
		cout<<ar[i]<<" ";
	}
}

