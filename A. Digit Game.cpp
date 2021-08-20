#include<bits/stdc++.h>
using namespace std;
int T,n,a[2][2];
signed main()
{
	cin>>T;
	while (T--)
	{
		memset(a,0,sizeof a);
		string str;
		cin>>n>>str;
		for (int i=0;i<n;i++){
            a[(i+1)%2][int(str[i]-'0')%2]++;
            cout<<a[(i+1)%2][int(str[i]-'0')%2]<<endl;
		}

		if (n%2==1)
            if (a[1][1]) puts("1");
        else puts("2");

		if (n%2==0)
            if (a[0][0]) puts("2");
        else puts("1");
	}
	return 0;
}
