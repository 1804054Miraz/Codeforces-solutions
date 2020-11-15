#include<bits/stdc++.h>
using namespace std;
int main()
{
	set<int>set1;
	int test;
	cin>>test;
	while(test--){
		string st;
		cin>>st;
		int sz = st.size();
		int sum = 0;
		for(int i=0;i<sz;i++){
			//cout<<st[i]<<" = "<<sum<<endl;
			//cout<<st[i]<<" = "<<st[i]-'a'<<endl;
			sum = sum | (1<<(st[i]-'a'));
		}
			//cout<<"sum = "<<sum<<endl;
		
		set1.insert(sum);
	}
	cout<<set1.size();
	return 0;
}
