#include<bits/stdc++.h>
using namespace std;
int main(){
	string p,t;
	int i,j,sz1,sz2;
	int ar[200001];
	bool visit[200002];
	cin>>t>>p;
	
	sz1 = t.size();
	sz2 = p.size();
	for(i=0;i<sz1;i++){
		cin>>ar[i];
		}
		
	for(i=sz1-1,j=sz2-1;i>=0;i--){
		//cout<<t[i]<<endl;
		if(j<0){
			break;
		}
		//cout<<t[i]<<endl;
		if(t[i]==p[j]){
			if(visit[i]==false){
			//	cout<<ar[i]<<endl;
				visit[i]=true;
			}
			j--;
		}
		
	}
	
	for(i=0;i<sz1;i++){
		cout<<ar[i]<<endl;
		if(visit[ar[i]] == true){
			break;
		}
	}
	cout<<i+1<<endl;
}
		
