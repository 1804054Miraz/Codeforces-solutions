
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int  p,q,m,n;
	
	p = s.find("AB");
	q = s.find("BA",p+2);
	m = s.find("BA");
	n = s.find("AB",m+2);
	
	if((p>=0 && q>=0) || (m>=0 && n>=0))
	{
		cout<<"YES\n";
	}
	else 
	{
		cout<<"NO\n";
	}
}
