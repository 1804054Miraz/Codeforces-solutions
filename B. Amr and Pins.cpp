#include<bits/stdc++.h>
using namespace std;
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	double r,x1,y1,x2,y2,dis,p;
	cin>>r>>x1>>y1>>x2>>y2;
	dis = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	
	dis = dis/(2*r);
	p = (int)dis;
	
	//cout<<dis<<endl;
	if(dis-p==0){
		cout<<p<<endl;
	}
	else 
	cout<<p+1<<endl;
}


