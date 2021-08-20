#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m,i,j,t,v,x,y,q,add=0;
    cin>>n>>m;
    ll ar[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>ar[i];
    }
    for(i=1;i<=m;i++)
    {
        cin>>t;
        if(t==1)
        {
            cin>>v>>x;
            ar[v]=-add;
            ar[v]+=x;
        }
        else if(t==2)
        {
            cin>>y;
            add +=y;
        }
        else
        {
            cin>>q;
            cout<<ar[q]+add<<endl;
        }
    }
}
