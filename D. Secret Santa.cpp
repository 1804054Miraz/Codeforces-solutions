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
        int ar[n+1],res1[n+1],res2[n+1];
        bool mark[n+1];
        reset(mark);
        reset(res1);
      //  vector<int>distinct;
            int k=0;
        for(i=1;i<=n;i++)
        {
            cin>>ar[i];
            if(mark[ar[i]]==0)
            {
                mark[ar[i]]=1;
                res2[i]=res1[i]=ar[i];
                k++;
               // distinct.pb(ar[i]);
            }
        }
         cout<<k<<endl;
         vector<int>valu;
        for(i=1;i<=n;i++)
        {
            if(mark[i]==0)
                valu.pb(i);
            mark[i]=1;
        }
        //asigned from first to last and vice versa.
        for(i=1,j=0,k=valu.size()-1;i<=n;i++)
        {
            if(res1[i]==0)
            {
                res1[i]=valu[j++];
                res2[i]=valu[k--];
            }
        }

        int a=0,b=0,inda=-1,indb=-1;
        //check ind==val
        for(i=1;i<=n;i++)
        {
            if(res1[i]==i)
            {
                inda=i;
                a++;
            }

            if(res2[i]==i)
            {
                indb=i;
                b++;
            }
        }
       // cout<<a<<" "<<b<<endl;
         if(a<b)
         {
             for(i=1;inda>0 and i<=n;i++)
             {
                 if(ar[inda]==ar[i] and i!=inda)
                 {
                     res1[inda]=ar[inda];
                    res1[i]=inda;
                     break;
                 }
             }
              for(i=1;i<=n;i++)
            cout<<res1[i]<<" ";
            cout<<endl;
         }
         else
         {
           //  cout<<indb<<endl;
             for(i=1;indb>0 and i<=n;i++)
             {
                if(ar[indb]==ar[i] and i!=indb)
                {
                    res2[indb]=ar[indb];
                    res2[i]=indb;
                    break;
                }
             }
             for(i=1;i<=n;i++)
            cout<<res2[i]<<" ";
            cout<<endl;
         }

    }
}

