#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	cout<<min(min((abs(a-b)+abs(b-c)),(abs(a-c)+abs(c-b))),(abs(c-a)+abs(a-b)))<<endl;
}
