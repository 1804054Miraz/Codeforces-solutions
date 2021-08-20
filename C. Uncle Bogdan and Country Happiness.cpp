//Bismillahir Rahmanir Rahim
//Allahumma Rabbi Jhidni Elma
///A lot of mistakes is happened without understanding questions clearly.\
Please,make sure that understand question clearly.Think from every possible output.\
Make different algorithm to answer the question.Don't think that you have tried all possible ways.\
There is always simple and tricky way to solve the brute force type question.
/*--------Please carefully check--------
    1.Overflow and underflow
    2.Corner test case
    3. divide zero

*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long  ull;
typedef long double ld;
const ld PI = 2*acosl(0.0);
const int inf=2e5+7;
const int mxN=3000000;
const int mod=1e9+7;
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define pb push_back
#define reset(a) memset(a,0,sizeof a)
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) (a/gcd(a,b)*b)
#define abs(a) (a<0?-(a):a)
#define debug1(x)  cout << #x << "=" << x << endl
#define debug2(x, y)  cout << #x << "=" << x << "," << #y << "=" << y << endl
#define digit2(x) floor((log2(x)))
#define digit2(x) floor((log2(x)))
#define sc(a) scanf("%d",&a)
#define pf(a) printf("%d\n",a)
#define DEBUG 0
//cout<<"Case "<<cas<<": "<<
bool ans=true;
int h[100005],p[100005],vis[100005],good[100005];
vector<int>tree[100005];
void dfs(int root,int parent=-1)
{
   // cout<<root<<endl;
    //mark[root]=1;
    vis[root]=p[root];
    ll sum=0;
    for(auto i:tree[root]){

           if(parent==i)
            continue;
                 //  cout<<i<<endl;
                dfs(i,root);
                vis[root]+=vis[i];
                sum += good[i];
    }
    good[root]=(vis[root]+h[root])/2;
   // y = vis[root]-;
   if((vis[root]+h[root])%2==0)
   {
       //ans=true;
   }
   else
    ans=false;
    if(good[root]>=0 and good[root]<=vis[root])
    {
       // ans=true;
    }
    else
        ans=false;
   if(sum<=good[root])
   {
       //ans=true;
   }
   else
    ans=false;
    //cout<<sum<<" "<<good[root]<<" "<<root<<endl;
    //return 0;
}
int main()
{
        speed;
    int t,n,m,i,a,b;
    cin>>t;
    while(t--)
    {
        ans=true;
        cin>>n>>m;
        for(i=1;i<=n;i++)
        {
            cin>>p[i];
        }
        for(i=1;i<=n;i++)
        {
            cin>>h[i];
        }
        for(i=1;i<n;i++)
        {
            cin>>a>>b;
            tree[a].pb(b);
            tree[b].pb(a);
        }
        dfs(1);
        if(ans)
        {
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";

        for(i=1;i<=n;i++)
            tree[i].clear();

        reset(vis),reset(good),reset(p),reset(h);
    }
}
/*
1
5 11
1 2 5 2 1
-11 -2 -6 -2 -1
1 2
1 3
1 4
3 5
*/
