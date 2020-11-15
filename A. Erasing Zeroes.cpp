#include<bits/stdc++.h>
using namespace std;
int main(){

	int n,dup=0,cn=0,i,j=0;
	cin>>n;
	while(n--){
	string st;
	cin>>st;
	cn=0;
	for(i=st.find('1');i<st.find_last_of('1');i++){
		if(st[i]=='0'){
			cn++;
		}
	}
	cout<<cn<<endl;
}
}


