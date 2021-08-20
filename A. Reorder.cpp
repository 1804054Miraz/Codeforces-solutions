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
int main()
{
    int n,test,sum,i,m,a;
    cin>>test;
    while(test--)
    {
        cin>>n>>m;
        sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a;
            sum+=a;
        }
        if(sum==m)
        {
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
    }
}

