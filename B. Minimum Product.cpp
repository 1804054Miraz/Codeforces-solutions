///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define pb push_back
#define reset(a) memset(a,0,sizeof a)
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) (a/gcd(a,b)*b)
#define abs(a) (a<0?-(a):a)
typedef long long ll;
typedef unsigned long long int ull;
typedef long double ld;
const ld PI = acosl(-1);
const int inf=1e9+7;
const int mxN=2e5+5;
#define SIZE 26
#define FORBIDDEN -1
#define NOT_VISITED 0
#define VISITED 1
int main()
{
    speed;
    ll test,a,b,c,d,x,y,prd,n,e,f,g,h,m;
    cin>>test;
    while(test--)
    {
        cin>>a>>b>>x>>y>>n;
        g = a;
        h = b;
       e =  c = a-x;
       f =  d = b-y;
       m = n;
        if(a<b)
        {
            if(n>c)
            {
                n = n-c, a -= c,
                n = n-d>0?d:n;
                b -=n;

            }
            else if(n==c)
            {
                a -=n;
            }
            else
            {
                a -= n;
            }
        }
        else
        {
            if(n>d)
            {
                n = n-d, b -= d,
                n=n-c>0?c:n;
                a -= n;

            }
            else if(n==d)
            {
                b -= n;
            }
            else
            {
                b -= n;
            }
        }
         if(y<x)
           {
                f = m-f>0?f:m;
                m -= f;
                h -= f;
                e = m-e>0?e:m;
                g -= e;

           }
           else
           {
               e=m-e>0?e:m;
               m -= e;
               g -= e;
               f = m-f>0?f:m;
               h -= f;
           }
           //cout<<g*h<<endl;
           //a = min(a,g);
           //b = min(b,h);

        cout<<min((a*b),(g*h))<<endl;
    }
}
