#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test,mx,mn,a;
	scanf("%d",&test);
	test = test-1;
	scanf("%d",&a);
	mx = a;
	mn = a;
	int cn=0;
	while(test--)
	{
		
		scanf("%d",&a);
			if(a>mx){
				mx = a;
				cn++;
			}
			else if(a<mn){
				mn = a;
				cn++;
			}
		}
	printf("%d\n",cn);
}
