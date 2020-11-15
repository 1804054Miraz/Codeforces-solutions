#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,res,b;
	scanf("%d%d",&n,&m);
	res = n;
	while(n>=m){
		b = res;
		res += n/m;
		
		n = res-(b/m)*m;
	}
		
	printf("%d\n",res);
}
