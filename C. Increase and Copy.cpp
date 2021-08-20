//CODE BY DAKSH
#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define pii         pair<ll,ll>
#define vi          vector<ll>
#define vii         vector<pii>
#define mi          map<ll,ll>
#define mii         map<pii,ll>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define mus         multiset<ll>
#define itr         :: iterator
#define pi          3.141592653589793238462
#define setp(x)     fixed << setprecision(x)
#define RU(v)       v.resize(distance(v.begin(), unique(all(v))))

#define M1          1000000007
#define NO          cout<<"NO\n"
#define YES         cout<<"YES\n"
#define MOD         998244353

using namespace std;
void blowback()
{
    ll i,j,l,k,n,m,ans=0,sum=0;
    string s;
    cin>>n;
    k=sqrt(n);
    cout<<k-1+n/k<<endl;
    cout<<bool(n%k)-1<<endl;
    cout<<k-1+n/k+(n%k)-1<<"\n";
}
signed main()
{
   // ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    long long int t=1;
    cin>>t;
    while(t--)
    {
        blowback();
    }
    return 0;
}
