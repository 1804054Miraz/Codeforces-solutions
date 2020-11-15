#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,i,q,a,index;
	cin>>n;
	int ar[n];
	for(i=0;i<n;i++){
		cin>>ar[i];
	}
	sort(ar,ar+n);
	cin>>q;
	for(i=0;i<q;i++){
		cin>>a;
		if(a<ar[0]){
			cout<<0<<endl;
			continue;
		}
		index = upper_bound(ar,ar+n,a)-ar;
		cout<<index<<endl;
	
	}
	return 0;
}
