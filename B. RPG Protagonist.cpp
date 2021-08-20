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
const ll inf=2e14+7;
const int mxN=2e9+5;
#define SIZE 26
#define FORBIDDEN -1
#define NOT_VISITED 0
#define VISITED 1
int main()
{
   // cout<<inf<<endl;
    ll sword,war,test,p,f,s,w,mn,ans;
    cin>>test;
    while(test--)
    {
        mn=inf;
        ans = 0;
        cin>>p>>f>>sword>>war>>s>>w;
        if(s<w)
        {
            mn = min((p/s)*s,s*sword);
            p -= mn;
            sword -=mn/s;
            ans += mn/s;

            mn = min((p/w)*w,war*w);
            p -= mn;
            war -= mn/w;
            ans += mn/w;

            f +=p;

            mn = min((f/s)*s,sword*s);
            f -= mn;
            sword -=mn/s;
            ans +=mn/s;

            mn = min((f/w)*w,w*war);
            f -=mn;
            war -= mn/w;
            ans += mn/w;
        }
        else
        {
            mn = min((p/w)*w,war*w);
            p -= mn;
            war -= mn/w;
            ans += mn/w;

            mn = min((p/s)*s,s*sword);
            p -= mn;
            sword -=mn/s;
            ans += mn/s;

            f +=p;

            mn = min((f/w)*w,w*war);
            f -=mn;
            war -= mn/w;
            ans += mn/w;

            mn = min((f/s)*s,sword*s);
            f -= mn;
            sword -=mn/s;
            ans +=mn/s;
        }
        cout<<ans<<endl;
    }
}

