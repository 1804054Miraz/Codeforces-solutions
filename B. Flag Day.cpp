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
int main()
{
    int n,m,i,j,a,b,c;
    cin>>n>>m;
    int color[3]={1,2,3};
    map<int,int>Dancer;

    bool visit[n+1];
    reset(visit);
    for(i=0;i<m;i++)
    {
        map<int,int>assigned;
        cin>>a>>b>>c;
        if(Dancer[a])
        {
            assigned[Dancer[a]]=1;
        }
        if(Dancer[b])
        {
            assigned[Dancer[b]]=1;
        }
        if(Dancer[c])
        {
            assigned[Dancer[c]]=1;
        }
        if(!visit[a])
        {
            visit[a]=1;
            for(j=0;j<3;j++)
            {
                if(assigned[color[j]]==0)
                {
                    assigned[color[j]]=1;
                    Dancer[a]=color[j];
                        break;
                }
            }
        }
        else
        {
            assigned[Dancer[a]]=1;
        }

        if(!visit[b])
        {
            visit[b]=1;
            for(j=0;j<3;j++)
            {
                if(assigned[color[j]]==0)
                {
                    assigned[color[j]]=1;
                    Dancer[b]=color[j];
                        break;
                }
            }
        }
        else
        {
            assigned[Dancer[b]]=1;
        }

        if(!visit[c])
        {
            visit[c]=1;
            for(j=0;j<3;j++)
            {
                if(assigned[color[j]]==0)
                {
                    assigned[color[j]]=1;
                    Dancer[c]=color[j];
                        break;
                }
            }
        }
        else
        {
            assigned[Dancer[c]]=1;
        }

    }
    for(i=1;i<=n;i++)
    {
        cout<<Dancer[i]<<" ";
    }
    cout<<endl;
}

