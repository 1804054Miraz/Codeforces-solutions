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
    int n,i,cn1=0,cn2=0,cn3=0;
    cin>>n;
    int ar[n];
    map<int,int>mp;

    for(i=0;i<n;i++)
    {
        cin>>ar[i];
        mp[ar[i]]++;
    }
    while(mp[1] and mp[2] and mp[4])
    {
        cn1++;
        mp[1]--,mp[2]--, mp[4]--;
    }
   while(mp[1] and mp[2] and mp[6])
    {
        cn2++;
        mp[1]--,mp[2]--, mp[6]--;
    }
    while(mp[1] and mp[3] and mp[6])
    {
        cn3++;
        mp[1]--,mp[3]--, mp[6]--;
    }
   // cout<<cn1<<" "<<cn2<<" "<<cn3<<endl;
    if(cn1+cn2+cn3>=n/3)
    {
        n /= 3;
        while(cn1-- and n--)
        {
            cout<<1<<" "<<2<<" "<<4<<endl;
        }
        while(cn2-- and n--)
        {
            cout<<1<<" "<<2<<" "<<6<<endl;
        }
        while(cn3-- and n--)
        {
            cout<<1<<" "<<3<<" "<<6<<endl;
        }
    }
    else
        cout<<-1<<endl;
}

