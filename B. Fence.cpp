///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int mx = 2147483647;
int main()
{

	int k,n,sum=0;
	scanf("%d%d",&n,&k);
	int mn=1000009,ind;
	int ar[mn+1],pr[mn+2];
	memset(pr,0,sizeof pr);
	for(int i=1;i<=n;i++){
		scanf("%d",&ar[i]);
			pr[i] =pr[i-1]+ar[i];
		if(i>=k){
			sum = pr[i]-pr[i-k];
			if(sum<mx){
				mx = sum;
				ind = i-k+1;
			}
			//cout<<sum<<" ";
		}
	}
	
	printf("%d\n",ind);
}
