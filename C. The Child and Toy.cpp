#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  pb push_back
vector<pair<int,int>>mp;
vector<int>adj[1001];
map<int,int>w;
int main()
{
    int n,m,a,i,j;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
       cin>>a;
       mp.pb({a,i});
       w[i]=a;
    }
    sort(mp.begin(),mp.end());
    reverse(mp.begin(),mp.end());
   /* for(auto x:mp)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }*/
    for(i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    int node,weight,child;
    ll res=0;
    for(i=0;i<n;i++)
    {
        node=mp[i].second;
            //cout<<node<<endl;
        for(j=0;j<adj[node].size();j++)
        {
            child = adj[node][j];
            weight=w[child];
           // cout<<child<<" "<<weight<<" ";
            res +=weight;
        }
      // cout<<"&&&"<<endl;
        mp[i].first=0;
        w[node]=0;
    }
    cout<<res<<endl;
}
