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
bitset<1000000000>br;
int main()
{
    speed;
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,ind=0,m;
        cin>>n>>m;
       // reset(br);
        for(i=0;i<=m;i++)
        {
            //cin>>ar[i];
            br[i]=(i^n);
           // cout<<br[i]<<" ";
        }
       // cout<<endl;
        sort(br,br+m+2);
        for(i=0;i<=m;i++)
        {
            ind = lower_bound(br,br+m+2,i)-br;
            if(ind==0 and br[ind]!=i)
            {
               // cout<<i<<endl;
                break;
            }
            else if(i>0 and br[ind]!=i)
            {
               // cout<<i<<endl;
                break;
            }
          //  cout<<"ind = "<<ind<<endl;
        }
        cout<<i<<endl;

    }
}
