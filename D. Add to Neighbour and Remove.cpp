//Bismillahir Rahmanir Rahim
//Allahumma Rabbi Jhidni Elma
/*--------Please carefully check--------
    1.Overflow and underflow
    2.Corner test case
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long  ull;
typedef long double ld;
const ld PI = 2*acosl(0.0);
const int inf=2e5+7;
const int mxN=3000000;
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
        int n,t,sum1,sum2,i,j,cn;
        sc(t);
        while(t--)
        {
            sc(n);
            int ar[n];
            for(i=0;i<n;i++)
            {
                sc(ar[i]);
            }
           cn=1, sum1=sum2=0;
            for(i=0;i<n;i++)
            {
                sum1 += ar[i];
                cn=1;sum2=0;
                for(j=i+1;j<n;j++)
                {
                    sum2 += ar[j];
                    if(sum2>sum1)
                    {
                        break;
                    }
                    else if(sum1==sum2)
                    {
                        sum2=0;
                        cn++;
                    }
                }
               if(sum2==0)
               {
                   pf(n-cn);
                   break;
               }
            }
            if(sum2)
            {
                pf(n-cn);
            }

        }
}
