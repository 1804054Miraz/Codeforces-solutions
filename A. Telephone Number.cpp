#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,test,a,i,p,g,j;
	cin>>test;
	char ch;
	for(i=0;i<test;i++){
	cin>>n;
	 p = n-10;
	 g=0;
	 for(j=0;j<n;j++){
		 cin>>ch;
		 if(p>0 && ch=='8'){
			 g=1;
		 }
		 p--;
	 }
	 
	 if(g>0){
		 cout<<"YES"<<endl;
	 }
	 else
	 cout<<"NO"<<endl;
}
	

}
