#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int cn=0;
	for(int i=1;i<=n/2;i++){
		if(n%i==0){
			cn++;
		}
	}
	printf("%d\n",cn);
}
