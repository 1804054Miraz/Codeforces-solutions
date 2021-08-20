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

int main()
{
    speed;
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ar[n+1],br[n+1];

        for(i=1;i<=n;i++)
            cin>>ar[i];
        for(i=1;i<=n;i++)
            cin>>br[i];

        sort(ar+1,ar+n+1);
        sort(br+1,br+n+1);

        int ami[n+1],she[n+1];
        reset(ami),reset(she);
        ami[0]=she[0]=0;
        for(i=1;i<=n;i++)
            ami[i]=ami[i-1]+ar[i];
        for(i=1;i<=n;i++)
            she[i]=she[i-1]+br[i];

        int cn=0,k,p=n,my=0,tar=0;
        k = n-n/4;
        //keep total sum of the values of the array
        my=accumulate(ar+(n-k)+1,ar+n+1,0);
        tar=accumulate(br+(n-k)+1,br+n+1,0);
       // cout<<my<<" "<<tar<<endl;
       int time=1;
       while(my<tar)
       {
           p++;
           k=p-p/4;
           my = ami[n]-ami[p-k]+(100*time);
           tar = she[n]-she[max(n-k,0)];
           cn++;
           time++;
       }
        cout<<cn<<endl;
    }
}

