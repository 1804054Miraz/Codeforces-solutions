#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int mx=0,p;
	double sum = 0.0;
	for(int i=0;i<n;i++){
		scanf("%d",&p);
		if(p>mx){
			mx = p;
		}
		sum +=p;
	}
	sum = (double)sum/n;
	
	printf("%lf\n",sum);
}
