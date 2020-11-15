#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,num,cn1=0,cn0=0,cn_mx=-1;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		cin>>num;
		if(num==0){
			cn0++;
			if(cn0>cn_mx){
			cn_mx = cn0;
		}
		}
		if(num==1){
			cn1++;
			if(cn0>0){
				cn0--;
			}
			
		}
	}

	cout<<cn1+cn_mx<<endl;
}
///  1 0 0 0 1 0 0 0 0 0 1 1 0 0 1 1 1 1 1 1 1 1 0 1 1 1 0 1 0 0 0 0 0 1 

