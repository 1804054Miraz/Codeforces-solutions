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
#define debug1(x)  cout << #x << "=" << x << endl
#define debug2(x, y)  cout << #x << "=" << x << "," << #y << "=" << y << endl
#define digit2(x) floor((log2(x)))
#define digit3(x) floor((log3(x)))
int a[5];
int main()
{
    int test,i,j,dig,m,n,p,cn,sum;
    a[0]=0;
    for(i=1;i<=4;i++)
    {
        a[i]+=a[i-1]+i;
        //cout<<a[i]<<" ";
    }
    cin>>test;
    while(test--)
    {
        cin>>n;
        p = n;
        cn=0;sum=0;
        while(p!=0)
        {
            p = p/10;
            cn++;
        }
        dig = n%10;
        sum = 10*(dig-1)+a[cn];
        cout<<sum<<endl;
    }
}

