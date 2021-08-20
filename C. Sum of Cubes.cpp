
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
ll qube_root(double x){
   // cout<<x<<endl;
   // cout<<"cube = "<<pow(x,1/3.0)<<endl;
    return (x<0? ceil(pow(-x,1./3.)):ceil(pow(x,1.0/3.0)));
}
int main()
{
    ll diff,x,a,p,res,b,i,j;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>x;
        ll q;
        bool ans=false;
     for(i=1;i<=10000;i++)
     {
        p = x-(i*i*i);
        if(p<=0)
            break;
            a = (int)qube_root(p);
       // a = cbrt(p);
       //printf("a = %lf\n",a);

        if(a*a*a == p)
        {
             //cout<<"a = "<<a<<"  p="<<p<<endl;
            ans=true;
            break;
        }
       // cout<<"a = "<<a<<endl;
     }
       //printf("%.5lf\n",double(pow((double)193000344139,1./3.)));

   // cout<<a<<endl;
     if(!ans)
     {
         cout<<"NO\n";
     }
     else
        cout<<"YES\n";
    }
}
//703657519796
