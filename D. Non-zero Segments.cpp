#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;
typedef long long int ll;
typedef vector<ll> vi;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl cout<<'\n'
#define pb push_back
#define all(s) s.begin(),s.end()
#define bs binary_search

#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) (a)*(b)/(__gcd((a),(b)))

const int Mod=1e9+7;
#define sum(a,b) (((a)%Mod)+((b)%Mod))%Mod
#define sub(a,b) (((a)%Mod)-((b)%Mod))%Mod
#define mul(a,b) (((a)%Mod)*((b)%Mod))%Mod



#define count1(x) __builtin_popcount(x)

#define dbg(x) cout << #x <<":"<<x<<endl;

bool isPowerOfTwo (int x)
{
    /* First x in the below expression is for the case when x is 0 */
    return x && (!(x&(x-1)));
}

ll pow(ll x, ll y, ll mod)
{
	int ans=1;
	while(y)
	{
		if(y&1)
			ans=(ans*x)%mod;
		y/=2;
		x=(x*x)%mod;
	}
	return ans;
}

int main()
{
	/*#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
        freopen("debug.txt","w",stderr);
	#endif*/
	//fast;
	ll n,i,sum,cnt;
	cin >> n;
	cout<<digit(n);
	ll a[n];
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	sum=0;
	cnt=0;
	unordered_set<ll> s;
	for(i=0;i<n;i++)
	{
		sum+=a[i];
		if(sum==0 || s.find(sum)!=s.end())
		{
			// dbg(i)
			s.clear();
// 			sum+=1000000000;
// 			sum-=a[i];
// 			s.insert(sum);
			sum=a[i];
			// sum=0;
			cnt++;
		}
		s.insert(sum);
	}
	cout << cnt << endl;
}
