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
    int n,a,b,i,j,left=0,right=0,l_od_r_ev=0,l_ev_r_od=0,sum1=0,sum2=0,cn=0;
    cin>>n;
    vector<pair<int,int>>vec;
    left=0,right=0;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a%2)
            left++;
        if(b%2)
            right++;
        if(a%2 and b%2==0)
        {
            l_od_r_ev++;
        }
         if(a%2==0 and b%2)
         {
             l_ev_r_od++;
         }
        vec.pb({a,b});
    }
    if(left%2==0 and right%2==0)
    {
        cout<<0<<endl;
    }
    else if(left%2 and right%2)
    {
        if(l_od_r_ev || l_ev_r_od)
        {
            cout<<1<<endl;
        }
        else
            cout<<-1<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    return 0;
}

