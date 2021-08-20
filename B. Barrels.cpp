
//Bismillahir Rahmanir Rahim
//Allahumma Rabbi Jhidni Elma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;
typedef long double ld;
const ld PI = acosl(-1);
const int inf=1e9+7;
const int mxN=2e5+5;
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define pb push_back
#define reset(a) memset(a,0,sizeof a)
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) (a/gcd(a,b)*b)
#define abs(a) (a<0?-(a):a)
#define debug1(x)      	cout << #x << "=" << x << endl
#define debug2(x, y)  	cout << #x << "=" << x << "," << #y << "=" << y << endl
#define digit(x) floor((log10(x))+1)

int main()
{
    speed;
    ll n,k,test,sum,i;
    cin>>test;
    while(test--)
    {
        sum=0;
        cin>>n>>k;
        ll ar[n];
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        for(i=n-2;k>0;k--,i--)
        {
            sum += ar[i];
        }
        cout<<sum+ar[n-1]<<endl;
    }
}
