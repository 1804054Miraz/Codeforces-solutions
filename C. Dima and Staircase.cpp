#pragma GCC optimize("Ofast")
#pragma GCC  target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  //  speed;
    ll n,i,j,prev=0,m;
    cin>>n;
    ll ar[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>ar[i];
    }
    cin>>m;
    ll w[m+1],h[m+1];

    vector<ll>vec;
    h[0]=0;
    for(i=1;i<=m;i++)
    {
        cin>>w[i]>>h[i];
        prev = max(prev+h[i-1],ar[w[i]]);
        vec.push_back(prev);
    }
    for(i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<endl;
    }
    return 0;
}
