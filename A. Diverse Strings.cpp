#include<bits/stdc++.h>
using namespace std;
int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int test,i;
	cin>>test;
	while(test--){
		string st;
		cin>>st;

		int sz = st.size();
		sort(st.begin(),st.end());
		
		for(i=0;i<sz-1;i++){
			if(st[i+1] - st[i] != 1){
				cout<<"NO\n";
				goto end;
			}
		}
			cout<<"YES"<<endl;
			end:;
	}
				
				
 
}
