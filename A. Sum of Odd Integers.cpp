#include<bits/stdc++.h>
using namespace  std;
int main()
{
	int n,k,test;
	scanf("%d",&test);
	while(test--){
		scanf("%d%d",&n,&k);
		if(n%2==0){
			if(k%2==0 && k<=sqrt(n)){
				printf("YES\n");
			}
			else 
			{
				printf("NO\n");
			}
		}
		else 
		{
			if(k%2==1 && k<=sqrt(n)){
				printf("YES\n");
			}
			else 
			{
				printf("NO\n");
			}
		}
	}
}
