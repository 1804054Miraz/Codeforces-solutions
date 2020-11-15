#include<bits/stdc++.h>
using namespace std;
bool marks[100000];
int main()
{
	int k,l,m,n,d;
	scanf("%d%d%d%d%d",&k,&l,&m,&n,&d);
	
	
	for(int i=k;i<=d;i+=k)	marks[i]=true;
	for(int i=l;i<=d;i+=l)	marks[i]=true;
	for(int i=m;i<=d;i+=m)	marks[i]=true;
	for(int i=n;i<=d;i+=n)	marks[i]=true;
	int cn=0;
	for(int i=1;i<=d;i++){
		if(marks[i]==false){
			cn++;
		}
	}
	
	printf("%d\n",d-cn);
}
