#include<bits/stdc++.h>
using namespace std;
int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	string a,b,c;
	int test,i;
	cin>>test;
	while(test--){
		cin>>a>>b>>c;
		int n = a.size();
		for(i=0;i<n;i++){
			if(a[i]==c[i]){
				b[i] = c[i];
			}
			else if(b[i]==c[i]){
				a[i] = c[i];
			}
			else {
				cout<<"NO\n";
				goto end;
			}
		}
		cout<<"YES\n";
		end:;
	}
}


