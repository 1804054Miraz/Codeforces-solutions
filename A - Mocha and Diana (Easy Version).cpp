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
#define  _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long  ull;
typedef long double ld;
const ld PI = 2*acosl(0.0);
const int inf=2e9+7;
const int mxN=3000000;
const int mod=998244353;
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
 int par1[1001],par2[1001],sz1[1001],sz2[1001];
 int find_par1(int x)
 {
    if(par1[x]==x)
        return x;
    else
        return par1[x]=find_par1(par1[x]);
 }
 int find_par2(int x)
 {
    if(par2[x]==x)
        return x;
    else
        return par2[x]=find_par2(par2[x]);
 }
 void linking1(int x,int y)
 {
    x = find_par1(x);
    y = find_par1(y);
    if(x!=y)
    {
       // if(sz1[x]<sz1[y])
          //  swap(x,y);
        par1[y]=x;
    }
 }
 void linking2(int x,int y)
 {
    x = find_par2(x);
    y = find_par2(y);
    if(x!=y)
    {
       // if(sz2[x]<sz2[y])
        //    swap(x,y);
        par2[y]=x;
    }
 }
int main()
{
    int n,m1,m2,i,j;
    cin>>n>>m1>>m2;
   // int par1[n+1],par2[n+1],sz1[n+1],sz2[n+1];
    for(i=1;i<=n;i++)
    {
        par1[i]=par2[i]=i;
       sz1[i]=sz2[i]=0;
    }
    int x,y;
    for(i=1;i<=m1;i++)
    {
        cin>>x>>y;
        linking1(x,y);
    }
    for(i=1;i<=m2;i++)
    {
        cin>>x>>y;
        linking2(x,y);
    }
    vector<array<int,2>>edges;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(find_par1(i)!=find_par1(j) and find_par2(i)!=find_par2(j))
            {
                edges.pb({i,j});
                linking1(i,j);
                linking2(i,j);
            }
        }
    }
    cout<<edges.size()<<endl;
    for(i=0;i<edges.size();i++)
    {
        cout<<edges[i][0]<<" "<<edges[i][1]<<endl;
    }
}

