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
    int t,i,j,f,s,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ar[n+1][6],br[n+1][6];
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=5;j++)
            {
                cin>>ar[i][j];
                br[i][j]=ar[i][j];
            }
        }
        vector<int>equall;
        bool mark[50001];
        reset(mark);
        int ans=1;
        for(i=1;i<n;i++)
        {
            f=s=0;
            for(j=1;j<=5;j++)
            {
               if(ar[i][j]<ar[i+1][j])
               {
                   f++;
               }
               else if(ar[i][j]>ar[i+1][j])
               {
                   s++;
               }
            }
           if(f>s)
           {
               for(j=1;j<=5;j++)
               {
                   swap(ar[i][j],ar[i+1][j]);
               }
               ans = i;
           }
           else if(f<s)
           {
               ans=i+1;
           }
           else
            ans=-1;
        }
        if(ans==-1){
            cout<<-1<<endl;
            continue;
        }
      //  cout<<ans<<endl;
        for(i=1;i<n;i++)
        {
            f=s=0;
                for(j=1;j<=5;j++)
                {
                    if(ar[i][j]<ar[n][j])
                    {
                   f++;
                    }
                    else if(ar[i][j]>ar[n][j])
                    {
                   s++;
                    }
                }
                    if(f>=s)
                    {
                    ans=-1;
                    break;
                    }
        }
        for(i=1;ans>0 and i<=n;i++)
        {
            f=0;
                for(j=1;j<=5;j++)
                {
                    if(br[i][j]==ar[n][j])
                    {
                   f++;
                    }
                }
                if(f==5)
                {
                    ans=i;
                }
        }
        cout<<ans<<endl;

    }
}

