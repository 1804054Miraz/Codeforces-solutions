#include<bits/stdc++.h>
using namespace std;
int main()
{
	string st;
	cin>>st;
	int cn=1,od=0,ev=0,i,n=st.size();
	sort(st.begin(),st.end());
	if(n%2==0){
	for(i=1;i<n;i++){
		cn=1;
		while(st[i-1]==st[i]){
			i++;
			cn++;
		}
		if(cn%2==0){
			ev++;
			i--;
		}
		else{
			od++;
		}
		
	}
	
	 if(od==1 || od==2){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}
}
		else{
		for(i=0;i<n-1;i++){
			cn=1;
			cout<<st[i]<<endl;
		while(st[i]==st[i+1]){
			i++;
			cn++;
		}
		if(cn%2==0){
			ev++;
			i--;
		}
		else{
			od++;
		}
		
	}
	if(od<=3){
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
}
cout<<od<<endl<<ev<<endl;

}
		
