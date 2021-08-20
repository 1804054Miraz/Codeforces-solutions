//Bismillahir Rahmanir Rahim
//Allahumma Rabbi Jhidni Elma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long  ull;
typedef long double ld;
const ld PI = acosl(-1);
const int inf=1e9+7;
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
#define digit3(x) floor((log3(x)))
int prime[1002];
void ve()
{
   int  i,j,n=1000;
    for(i=2;i<=n;i+=2)
    {
        prime[i]=1;
    }
    for(i=3;i*i<n;i+=2)
    {
        if(prime[i]==0)
        {
            for(j=i*i;j<=n;j+=i)
            {
                prime[j]=1;
            }
        }
    }
    prime[2]=0;
}
int main()
{
    ve();
    int t,n,a,b,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int cn=0;
       // cout<<4<<" ";
        a = 4*n;
        for(i=a;i>a/2;i-=2)
        {

                cn++;
                cout<<i<<" ";

        }
        cout<<endl;


    }
}

