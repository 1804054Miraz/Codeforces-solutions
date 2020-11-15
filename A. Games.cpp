#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test,cn=0;
	scanf("%d",&test);
	int a[test],b[test];
	for(int i=0;i<test;i++){
		scanf("%d%d",&a[i],&b[i]);
	}
	for(int i=0;i<test;i++){
		for(int j=0;j<test;j++){
		if(a[i]==b[j]){
			cn++;
		}
	}
	}
	printf("%d\n",cn);
}
		
