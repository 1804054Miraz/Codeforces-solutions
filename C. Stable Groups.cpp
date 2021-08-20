//Bismillahir Rahmanir Rahim
//Allahumma Rabbi Jhidni Elma
///A lot of mistakes is happened without understanding questions clearly.\
Please,make sure that understand question clearly.Think from every possible output.\
Make different algorithm to answer the question.Don't think that you have tried all possible ways.\
There is always simple and tricky way to solve the brute force type question.
/*--------Please carefully check--------
    1.Overflow and underflow
    2.Corner test case
    3. divide zero

*/
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long  ull;
typedef long double ld;
const ld PI = 2*acosl(0.0);
const int inf=2e5+7;
const int mxN=3000000;
const int mod=1e9+7;
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
    speed;
    ll n,x,k;
    int i,j;
    cin>>n>>k>>x;
    ll ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    vector<ll>vec,diff;
    for(i=1;i<n;i++)
    {
        vec.pb(ar[i]-ar[i-1]);
    }
    if(vec.size()==0)
    {
        cout<<1<<endl;
    }
    else if(vec.size()==1)
    {
        if((vec[0]+x-1)/x-1 <= k)
        {
            cout<<1<<endl;
        }
        else
            cout<<2<<endl;
    }
    else
    {
        for(i=0;i<vec.size();i++)
        {
            if(vec[i] > x)
            {
                //cout<<vec[i]<<" "<<vec[i-1]<<endl;
                diff.pb(vec[i]);
            }
        }
        sort(diff.begin(),diff.end());
        int group=diff.size()+1;
       // cout<<group<<endl;
        for(i=0;i<diff.size();i++)
        {
            //cout<<diff[i]<<" ";
            if((diff[i]+x-1)/x-1 <= k)
            {
                k -= (((diff[i]+x-1)/x)-1);
                diff[i]=0;
            }
        }
       // cout<<endl;
        int cn=0;
        for(i=0;i<diff.size();i++)
        {
            if(diff[i]>0)
            {
                cn++;
            }
        }
        cout<<cn+1<<endl;

    }
}

