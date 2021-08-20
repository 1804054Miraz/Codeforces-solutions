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
    speed;
    int test,n,m,L,R,U,D,l,r,u,d,sz;
    cin>>test;
    while(test--)
    {
        cin>>n>>m;
        bool x=0,y=0;
        string st;
        cin>>st;
        sz = st.size();
        u=d=l=r=0;
        for(int i=0;i<sz;i++)
        {
            if(st[i]=='D') d++;
            else if(st[i]=='U') u++;
            else if(st[i]=='L') l++;
            else if(st[i]=='R') r++;
        }
       // cout<<l<<" "<<r<<" "<<d<<" "<<u<<endl;
        if(n>0)
        {
            if(n<=r)
                x=1;
            else
                x=0;
        }
        else if(n<0)
        {
            n=-1*n;
            if(n<=l)
                x=1;
            else
                x=0;
        }
        else if(n==0)
        {
            x=1;
        }
        if(m>0)
        {
            if(m<=u)
                y=1;
            else
                y=0;
        }
        else if(m<0)
        {
            m=-1*m;
            if(m<=d)
                y=1;
            else
                y=0;
        }
        else if(m==0)
        {
            y=1;
        }

        if(x and y)
        {
            cout<<"YES\n";
        }
        else
        cout<<"NO\n";
    }
}

