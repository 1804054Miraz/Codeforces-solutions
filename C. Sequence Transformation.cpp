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
vector<int>vec;
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
        for(i=2;i<=n;i++)
        {
            if(ar[i-1]!=ar[i])
            {
                cnt[ar[i]]=1;
            }
           // cout<<cnt[ar[i]]<<" ";
        }
        cnt[ar[n]]=0;
       // cout<<endl;
        for(i=2;i<=n;i++)
        {
            if(ar[i-1]!=ar[i])
            {
                cnt[ar[i]]++;
            }
           // cout<<cnt[ar[i]]<<" ";
        }
       // cout<<endl;
       if(cnt[ar[1]]==0 and ar[1]!=ar[n])
       {
           cnt[ar[1]]++;
       }
       else if(cnt[ar[0]]>0 and ar[1]!=ar[n])
       {
           cnt[ar[0]]++;
       }
        for(i=1;i<=n;i++)
        {
            if(cnt[i]!=0)
            {
                vec.pb(cnt[i]);
            }
            //cout<<cnt[i]<<" ";
        }
      //  cout<<endl;
       sort(vec.begin(),vec.end());
       if(vec.size())
       {
           cout<<vec[0]<<endl;
       }
       else
        cout<<0<<endl;
       reset(ar),reset(cnt);
       while(!vec.empty())
       {
           vec.pop_back();
       }
    }
}

