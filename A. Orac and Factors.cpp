///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define READ(n) freopen("Gfg.txt","r",stdin)
#define 	ll long long int
#define reset(a, b) memset(a, b, sizeof(a))
#define 	pb push_back
#define 	mx 2147483648
#define 	mn -2147483648
#define 	speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double pi = acos(-1.0);
const ll inf = 1e17 + 7;
const int n = 1000000;
bool prime[n+4];
void sieve(){
	for(int i=2;i<=n;i+=2){
		prime[i]=1;
	}
	for(int i=3;i*i<=n;i+=2){
		if(prime[i]==0){
			for(int j=i*i;j<=n;j+=i+i){
				prime[j]=1;
			}
		}
	}
	prime[2]=0;
}
int main(){
	sieve();
	ll N,k,t;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld%lld",&N,&k);
		if(N%2==0){
			N +=2*k;
		}
		else if(prime[N]==0){
			k--; N +=N;
			N +=2*k;
		}
		else {
			int s=3;
			while(N%s){
				s +=2;
			}
			k--;
			N +=s;
			N +=k*2;
		}
		printf("%lld\n",N);
	}
}
