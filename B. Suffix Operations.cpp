//Bismillahir Rahmanir Rahim
//Allahumma Rabbi Jhidni Elma
/*--------Please carefully check--------
    1.Overflow and underflow
    2.Corner case
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
vector<ll>vec;
int main()
{
    ll n,i,t,a,mx,mn,mid,ans;
    ll dif;
   // sc(t);
    cin>>t;
    while(t--)
    {
        //sc(n);
        cin>>n;
        mn = 600000000;
        mx = -600000000;
        for(i=1;i<=n;i++)
        {
           // sc(a);
           cin>>a;
            mn = min(mn,a);
            mx = max(mx,a);
            vec.pb(a);
        }
        cout<<mx<<endl<<mn<<endl;
        mid = (mn+mx);
        mid/=2;
        cout<<mid<<endl;
       /* for(i=0;i<vec.size();i++)
        {
            if(mx==vec[i])
            {
                vec[i]=mid;
            }
        }
        for(i=0;i<vec.size();i++)
        {
            cout<<vec[i]<<" ";
        }
        cout<<endl;*/

        dif=0;
            dif = ((mid-vec[0])<0?(mid-vec[0])*(-1):(mid-vec[0]));
            ans=dif;
          //  cout<<dif<<endl;
            for(i=1;i<vec.size();i++)
            {
                if(vec[i-1]==vec[i])
                {
                    continue;
                }
                cout<<vec[i]<<" ";
                dif = ((mid-vec[i])<0?(mid-vec[i])*(-1):(mid-vec[i]));
                ans +=dif;
                //cout<<dif<<endl;
            }
            cout<<endl;
           // ans = ans - (mn-mid)*(-1);
            cout<<ans<<endl;

       // cout<<endl;
        vec.clear();
    }
}

