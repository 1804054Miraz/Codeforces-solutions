#include<bits/stdc++.h>
using namespace std;
map<string,string>mp;
int main()
{
	int n,i,m;
	string a,b;
	cin>>n>>m;
	
	for(i=0; i<m;i++)
	{

		cin>>a>>b;
		mp[a]=b;
		mp[b]=a;
	}
	while(n--)
	{
		cin>>a;
		b = mp[a];
		if(a.length()<b.length())
		{
			cout<<a<<" ";
		}
		else if(a.length()==b.length()){
		cout<<a<<" ";
	}
	else
	{
		cout<<b<<" ";
	}
		
		//cout<<len<<endl;	
	}
}
