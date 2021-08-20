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
int main()
{
    int t,n,x,no_ev,no_od,a;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        no_ev=no_od=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a;
            if(a%2)
            {
                no_od++;
            }
            else
                no_ev++;
        }
        if(no_od==0)
        {
            cout<<"No\n";
        }
        else if(no_od%2)
        {
           if(no_ev==0 and x%2==0)
           {
               cout<<"No\n";
           }
           else
             cout<<"Yes\n";
        }
        else
        {
            if(no_ev==0)
            {
                if(x%2==0)
                {
                    cout<<"No\n";
                }
                else
                   cout<<"Yes\n";
            }
            else
            {
                if(x==(no_ev+no_od))
                {
                   cout<<"No\n";
                }
                else
                    cout<<"Yes\n";
            }
        }

    }
}

