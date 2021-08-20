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
const ll inf=1e18+7;
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
ll dp[5009][5009],ar[5009];
int n,m,l,r;
ll solution(int i,int k)
{
   // cout<<i<<" "<<k<<endl<<" "<<r<<" "<<n<<endl;
    if(k==0)
        return 0LL;
    if(i>n)
        return -inf;
        auto &ans=dp[i][k];
        if(ans!=-1)
            return ans;

       // cout<<r<<endl;
     l=i,r=l+m-1;
     ans=0;
    if(r<=n)
    ans=ar[r]-ar[l-1]+solution(r+1,k-1);

    ans=max(ans,solution(i+1,k));
    return ans;
}

int main()
{
    int i,k;
   scanf("%d%d%d",&n,&m,&k);
    memset(dp,-1,sizeof dp);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&ar[i]);
        ar[i]+=ar[i-1];
       // cout<<ar[i]<<" ";
    }
    printf("%I64d\n",solution(1,k));
}

