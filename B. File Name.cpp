#include<bits/stdc++.h>
using namespace std;
int main(){

	int n,dup=0,cn=0,i;
	cin>>n;
	string st;
	cin>>st;
	cn=1;
	for(i=0;i<st.size()-1;i++){
		if(st[i]=='x' && (st[i]==st[i+1])){
			cn++;
			if(cn>2){
				dup++;
			}
		}
		else {
			cn=1;
		}
	}
	cout<<dup<<endl;
}
