#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n1,n2,index;
	cin>>n1;
	int ar1[n1];
	int sum = 0;
	for(int i=0;i<n1;i++){
		cin>>ar1[i];
		sum += ar1[i];
		ar1[i] = sum;
		cout<<ar1[i]<<" ";
	}
	cout<<endl;
	cin>>n2;
	int ar2[n2];
	for(int j=0;j<n2;j++){
		cin>>ar2[j];
		index = upper_bound(ar1,ar1+n1,ar2[j])-ar1;
		cout<<index<<endl;
		index = lower_bound(ar1,ar1+n1,ar2[j])-ar1;
		cout<<index<<endl;
	}
}
		


