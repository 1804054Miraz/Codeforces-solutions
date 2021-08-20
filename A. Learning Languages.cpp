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
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
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
vector<int>adj[101];
vector<int>ar[101];
bool ans=false;
 int group[100+5];
int gp=201;
bool mark[105];
void dfs(int i,int prev)
{
    // cout<<i<<" ";
    if(group[i])
    {
        ans=true;
        return ;
    }
    group[i]=gp;

    for(auto x:adj[i])
    {
        if(prev==x)
            continue;
        dfs(x,i);
    }
    //cout<<endl;
}

int main()
{
    int n,m,i,j,k;
    cin>>n>>m;
    //int ar[n+1][m+1];
    for(i=1;i<=n;i++)
    {
        cin>>k;

        if(k)
        {
            int a,b;
            cin>>a;
            ar[i].pb(a);
            for(j=1;j<k;j++)
            {
                cin>>b;
                ar[i].pb(b);

                adj[a].pb(b);
                adj[b].pb(a);
                a=b;
            }
        }

    }

    reset(group);
   /* for(i=1;i<=n;i++)
    {

        for(auto x:ar[i])
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }*/
    //int gp=201;
    i=1;
    int cn=0;
    while(i<=n and ar[i].size()==0){
            cn++;
            i++;
    }
        for(j=0;j<ar[i].size();j++)
        {
            dfs(ar[i][0],gp);
        }

    for(;i<=n;i++)
    {
        if(ar[i].size()==0)
        {
            cn++;
            continue;
        }
        // cout<<gp<<endl;
        ans=false;
        dfs(ar[i][0],gp);
        if(!ans)
        {
            gp++;
        }
        //reset(mark);
       // cout<<endl;
    }
    cout<<cn+gp-201<<endl;
}

