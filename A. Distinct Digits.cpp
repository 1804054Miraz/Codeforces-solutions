///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define 	ll long long int
#define 	pb push_back
#define 	sc scanf
#define 	pf printf
int main(){
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		string s = to_string(i);
		set<char>st(s.begin(),s.end());
		if(s.size()==st.size()){
		cout<<s<<endl;
		return 0;
	}
	}
	cout<<-1<<endl;
	return 0;
}
