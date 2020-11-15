#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2,ans;
	cin>>s1;
	ans = "NO";
	for(int i=0;i<5;i++){
		cin>>s2;
		if(s2[0]==s1[0])
			ans = "YES";
		else if(s2[1]==s1[1])
		ans = "YES";
	}
}
