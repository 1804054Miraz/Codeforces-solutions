#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,a,b,c,d,e,p;
	cin>>n;
	
		while(1){
			n++;
		p=n;
		e = n%1000;
		a = n-e;
		a = a/1000;
		p = e;
		
		e = p%100;
		b = p-e;
		b = b/100;
		p = e;
		
		e = p%10;
		c = p-e;
		c = c/10;
		
		d = e;
		if(a!=b && b!=c && c!=d && a!=c && b!=d && a!=d)
		break;
		
	}
	
	//cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl;
	cout<<n<<endl;
}
