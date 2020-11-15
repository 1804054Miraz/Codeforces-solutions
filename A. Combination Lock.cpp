#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,sum=0;
	scanf("%d",&n);
	char a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	for(int i=0;i<n;i++){
		sum += min(min(abs(a[i]-b[i]),10-a[i]+b[i]),min(a[i]+10-b[i],abs(a[i]-b[i])));
		
	}
	cout<<sum<<endl;
}


