///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d,m,n;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	m = min(min(a,c),d);
	a = a-m;
	c = c-m;
	d = d-m;
	n = min(a,b);
	printf("%d\n",m*256+n*32);
}
