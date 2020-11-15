#include<bits/stdc++.h>
using namespace std;
int main(){
	set<char>st;
	string str;
	getline(cin, str);
	int str_sz = str.size();
	int k,i=0;
	cin>>k;
	if(k>str_sz){
		cout<<"impossible\n";
		return 0;
	}
	while(str_sz--){
		st.insert(str[i]);
		i++;
	}
	int st_sz = st.size();
	if(k>st_sz){
	cout<<k-st_sz<<"\n";
}
else
cout<<0<<"\n";
	
	
}



