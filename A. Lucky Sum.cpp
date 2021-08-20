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
const int inf=1e9;
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
 vector<ll>vec4,vec7,res;
int main()
{
    ll l,r,i,p=0,k,sz,j;
    cin>>l>>r;

    //ll mx=744444477;
   // vec4.pb(4),vec4.pb(7),vec4.pb(44),vec4.pb(47),vec4.pb(74),vec4.pb(77);
    res.pb(4), res.pb(7);
    for(i=0;p<=int(1e10);i+=2)
    {
        p = res[i]*10+4;
      res.pb(p);
      p = res[i]*10+7;
      res.pb(p);
      p = res[i+1]*10+4;
      res.pb(p);
      p = res[i+1]*10+7;
      res.pb(p);

    }
    cout<<res.size()<<endl;
    sort(res.begin(),res.end());
     for(i=0;i<res.size();i++)
    {
        cout<<res[i]<<endl;
    }
    cout<<endl;
   // for()
   ll sum=0;
    for(i=0;l<=r;)
    {
      // cout<<res[i]<<endl;
        if(res[i]>=l)
        {
            sum += res[i];
            l++;
        }
        else
            i++;
    }
    cout<<sum<<endl;
}
///5383598331
