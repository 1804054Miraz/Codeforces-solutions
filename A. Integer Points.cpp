#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,m,pi,qi;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		long long int ev1,od1,ev2,od2;
		ev1=od1=od2=ev2=0;
		while(n--){
			scanf("%lld",&pi);
			if(pi%2==0){
				ev1++;
			}
			else
			od1++;
		}
		scanf("%lld",&m);
		while(m--){
			scanf("%lld",&qi);
			if(qi%2==0)
			ev2++;
			else 
			od2++;
		}
		long long int res = (od1*od2)+(ev1*ev2);
		printf("%lld\n",res);
	}
}
