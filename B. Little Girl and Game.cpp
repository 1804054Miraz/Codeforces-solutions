///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define 	ll long long int
#define 	pb push_back
#define 	mx 2147483648
#define 	mn -2147483648
vector<int>vec(26);
int main(){
	string st;
	cin>>st;
	int sz =st.size();
	for(int i=0;i<sz;i++)
	{
		vec[st[i]-'a']++;
	}
	int k=0;
	for(int i=0;i<26;i++){
		if(vec[i]%2==1)
		k++;
	}
	if(k>0 && k%2==0)
		cout<<"Second\n";
	else
	cout<<"First\n";
	
	return 0;
}

