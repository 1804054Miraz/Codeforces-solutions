#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d=0;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b<=c){
		d = c-(a+b)+1;
	}
	else if(b+c<=a){
		d = a - (b+c)+1;
	}
	else if(a+c<=b)
	{
		d = b-(a+c)+1;
	}
	cout<<d<<endl;
}
	
		
