#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	
	int mul = a*b*c;
	int sum = a+b+c;
	mul = max(mul,sum);
	int u,v,w;
	u = (a+b)*c;
	v = a*(b+c);
	u = max(u,v);
	w = a+(b*c);
	v = (a*b)+c;
	v = max(v,w);
	
	int res = max(v,u);
	printf("%d\n",max(mul,res));
		
	}
			
