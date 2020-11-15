#include<bits/stdc++.h>
using namespace std;
const int inf1 = 100000.0;
const int inf2 = 200000.0;
int main()
{
	set<double>st;
	int n,x,y;
	cin>>n>>x>>y;
	while(n--){
		int x1,y1;
		cin>>x1>>y1;
		double up,down,res;
		up = (y-y1);
		down = (x-x1);
		res = up/down;
		if(x1==x)
		res = inf1;
		else if(y==y1)
		res = inf2;
		
		
		st.insert(res);
	}
	cout<<st.size()<<endl;
}
		
