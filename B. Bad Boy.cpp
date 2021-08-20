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
    int t;
    ll n,m,r,c,x1,x2,x3,x4,N,S,E,W,y1;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>r>>c;
        N = abs(r-1)+abs(c-m);
        S = abs(r-n)+abs(1-c);
        W = abs(n-r)+abs(m-c);
        E = abs(r-1)+abs(c-1);
       // cout<<N<<" "<<S<<" "<<E<<" "<<W<<endl;
        ll ar[4]={N,S,W,E};
        sort(ar,ar+4);
       // cout<<ar[3]<<endl;
        y1= ar[3];
        if(N==y1)
        {
            S=abs(1-n)+abs(m-1);
            E=abs(1-1)+abs(m-1);
            W=abs(1-n)+abs(m-m);
            ll ar[3]={S,W,E};
            sort(ar,ar+3);
            if(ar[2]==S)
            {
                cout<<1<<" "<<m<<" "<<n<<" "<<1<<endl;
                //cout<<y1+S+abs(r-n)+abs(c-1)<<endl;
            }
            else if(ar[2]==E)
            {
                cout<<1<<" "<<m<<" "<<1<<" "<<1<<endl;
               // cout<<y1+E+abs(r-1)+abs(c-1)<<endl;
            }
            else
            {
                cout<<1<<" "<<m<<" "<<n<<" "<<m<<endl;
                //cout<<y1+W+abs(r-n)+abs(c-m)<<endl;
            }
            //cout<<y1+ar[2]+
        }
        else if(S==y1)
        {
            E=abs(n-1)+abs(1-1);
            W=abs(n-n)+abs(1-m);
            N=abs(n-1)+abs(1-m);
            ll ar[3]={N,W,E};
            sort(ar,ar+3);
            if(ar[2]==N)
            {
                cout<<1<<" "<<m<<" "<<n<<" "<<1<<endl;
                //cout<<y1+N+abs(r-1)+abs(c-m)<<endl;
            }
            else if(ar[2]==E)
            {
                cout<<n<<" "<<1<<" "<<1<<" "<<1<<endl;
            }
            else
            {
                cout<<n<<" "<<1<<" "<<n<<" "<<m<<endl;
            }
        }
        else if(E==y1)
        {
            S=abs(1-n)+abs(1-1);
            N=abs(1-1)+abs(1-m);
            W=abs(1-n)+abs(1-m);
            ll ar[3]={S,W,N};
            sort(ar,ar+3);
            if(ar[2]==S)
            {
                cout<<n<<" "<<1<<" "<<1<<" "<<1<<endl;
            }
            else if(ar[2]==N)
            {
                cout<<1<<" "<<m<<" "<<1<<" "<<1<<endl;
            }
            else
            {
                cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
            }
        }
        else
        {
            E=abs(n-1)+abs(m-1);
            N=abs(n-1)+abs(m-m);
            S=abs(n-n)+abs(m-1);
            ll ar[3]={S,N,E};
            sort(ar,ar+3);
            if(ar[2]==S)
            {
                cout<<n<<" "<<1<<" "<<n<<" "<<m<<endl;
            }
            else if(ar[2]==E)
            {
                cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
            }
            else
            {
                cout<<1<<" "<<m<<" "<<n<<" "<<m<<endl;
            }
        }
    }
}

