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
int n,m1,m2;

struct node
{

    int par[100001];
    node(){
    for(int i=1;i<=100001;i++)
    {
        par[i]=i;
       // cout<<"ttt";
    }
    }
     int find_par(int x)
    {
    if(par[x]==x)
        return x;
    else
        return par[x]=find_par(par[x]);
    }
    void linking(int x,int y)
    {
        x=find_par(x);
        y=find_par(y);
        if(x!=y)
        par[y]=x;
    }

}player1,player2;
int main()
{

    cin>>n>>m1>>m2;
    int u,v;
    while(m1--)
    {
        cin>>u>>v;
       // cout<<"hhh\n";
        player1.linking(u,v);

    }
    while(m2--)
    {
        cin>>u>>v;
        player2.linking(u,v);
    }
    stack<int>stk1,stk2;
    vector<array<int,2>>edges;
    for(int i=2;i<=n;i++)
    {
        if(player1.find_par(i)==player1.find_par(1))
        {
            stk1.push(i);
            continue;
        }
        if(player2.find_par(i)==player2.find_par(1))
        {
            stk2.push(i);
            continue;
        }
        edges.pb({1,i});
        player1.linking(1,i);
        player2.linking(1,i);
    }
    while(!stk1.empty() and  !stk2.empty())
    {
        int i,j;
        i=stk1.top();
        if(player1.find_par(i)==player1.find_par(1) and player2.find_par(i)==player2.find_par(1))
        {
            stk1.pop();
            continue;
        }
        j=stk2.top();
        if(player1.find_par(j)==player1.find_par(1) and player2.find_par(j)==player2.find_par(1))
        {
            stk2.pop();
            continue;
        }
        edges.pb({i,j});
         player1.linking(j,i);
        player2.linking(j,i);

    }
    cout<<edges.size()<<endl;
    for(int i=0;i<edges.size();i++)
    {
        cout<<edges[i][0]<<" "<<edges[i][1]<<endl;
    }
}
