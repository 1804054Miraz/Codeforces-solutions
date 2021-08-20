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
vector<ll>lucky,lucky_num;
void cal()
{
    ll p;
    int i;
        lucky.pb(4), lucky.pb(7);
    for(i=0;p<=ll(7777744444);i+=2)
    {
        p = lucky[i]*10+4;
        lucky.pb(p);
        p = lucky[i]*10+7;
        lucky.pb(p);

        p = lucky[i+1]*10+4;
        lucky.pb(p);
        p = lucky[i+1]*10+7;
        lucky.pb(p);
    }
   // cout<<lucky.size()<<endl;
    int cn4=0,cn7=0,r;
    for(i=0;i<lucky.size();i++)
    {
        p = lucky[i];
        cn4=cn7=0;
        while(p)
        {
           r = p%10;
           if(r==4)
            cn4++;
           else
            cn7++;
           p/=10;
        }
        if(cn4==cn7)
        {
            //cout<<lucky[i]<<endl;
            lucky_num.pb(lucky[i]);
        }
    }
   // cout<<endl;

}
int main()
{
    cal();
    ll n;
    cin>>n;
     auto pos = lower_bound(lucky_num.begin(),lucky_num.end(),n);
    cout<<*pos<<endl;
    //cout<<pos-lucky_num.begin()<<endl;

}

