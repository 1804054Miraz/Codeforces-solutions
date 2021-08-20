//Bismillahir Rahmanir Rahim
//Allahumma Rabbi Jhidni Elma
/*--------Please carefully check--------
    1.Overflow and underflow
    2.Corner test case
    3. divide zero
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
     int a,b,c,i,j,n,t,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        bool ans=false;
        for(i=2;i*i<=n;i++)
        {

            if(n%i==0)
            {
                //cout<<i<<endl;
                a=i, b = n/i;
                for(j=i+1;j*j<=b;j++)
                {
                    if(b%j==0 and j!=b/j)
                    {
                        c=b/j, b=j;
                       cout<<"YES\n"<<a<<" "<<b<<" "<<c<<endl;
                        ans=true;
                        break;
                    }
                }
                if(ans)
                {
                    break;
                }
            }
        }
        if(ans==0)
        cout<<"NO\n";
    }
}

