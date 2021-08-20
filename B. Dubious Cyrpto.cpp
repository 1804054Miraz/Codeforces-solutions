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
int main()
{
    ll a,b,c,l,m,r,n,i,t;
    cin>>t;
    while(t--)
    {
        cin>>l>>r>>m;
        a=l,b=r;
        bool ans=false;
        //i works like a
        for(;l<=r;l++)
        {
            if(r-l>=0)
            {
               // cout<<r<<" "<<l<<endl;
                for(i=a;i<=r;i++)
                {
                    n=m-abs(r-l);
                   // cout<<n<<endl;
                  if(n>0 and n%i==0)
                  {
                      n=n/i;
                      //cout<<m-abs(r-l)<<" "<<i<<endl;
                      cout<<i<<" "<<r<<" "<<l<<endl;
                      ans=true;
                      break;
                  }

                }

            }
            if(!ans and l-r<=0)
            {
                 //cout<<r<<" "<<l<<endl;
                for(i=a;i<=r;i++)
                {
                    n=m-(l-r);
                  //  cout<<n<<endl;
                  if(n>0 and n%i==0)
                  {
                      n=n/i;
                     // cout<<m+abs(r-l)<<" "<<i<<endl;
                      cout<<i<<" "<<l<<" "<<r<<endl;
                      ans=true;
                      break;
                  }

                }

            }
            if(ans)
            {

                break;
            }
        }
    }

}

