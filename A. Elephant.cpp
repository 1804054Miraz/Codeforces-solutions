#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	scanf("%d",&x);
	int times = x/5;
	if(x%5!=0)
	printf("%d\n",times+1);
	else 
	printf("%d\n",times);
}
