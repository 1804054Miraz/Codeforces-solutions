//Bismillahir Rahmanir Rahim
//Allahumma Rabbi Jhidni Elma
/*--------Please carefully check--------
    1.Overflow and underflow
    2.
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
int ar[inf],cnt[inf];
int main()
{
    int t,n,i,j;
    sc(t);
    while(t--)
    {
        sc(n);
        for(i=1;i<=n;i++)
        {
            sc(ar[i]);
        }
        for(i=1;i<=n;i++)
        {
            cnt[ar[i]]++;
        }
        bool ans=false;
        for(i=1;i<=n;i++)
        {
            //cout<<cnt[i]<<" ";
            if(cnt[i]==1)
            {
                ans=true;
               break;
            }
        }
        //cout<<endl;
        if(ans){
                for(j=1;j<=n;j++)
                {
                    if(ar[j]==i)
                    {
                        break;
                    }
                }
        pf(j);
        }
        else
            pf(-1);
        reset(ar),reset(cnt);
    }
}

