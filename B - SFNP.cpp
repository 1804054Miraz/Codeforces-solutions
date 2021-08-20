//Bismillahir Rahmanir Rahim
//Allahumma Rabbi Jhidni Elma
#include<bits/stdc++.h>
using namespace std;
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define pb push_back
#define reset(a) memset(a,0,sizeof a)
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) (a/gcd(a,b)*b)
#define abs(a) (a<0?-(a):a)
typedef long long ll;
typedef unsigned long long int ull;
typedef long double ld;
const ld PI = acosl(-1);
const int inf=1e9+7;
const int mxN=1e4+5;
#define SIZE 26
#define FORBIDDEN -1
#define NOT_VISITED 0
#define VISITED 1
map<ll,bool>prime;
void siev()
{
    ll i,j,n=4294967296;
    for(i=2;i<=n;i+=2)
    {
        prime[i]=true;
    }
    for(i=3;i*i<=n;i+=2)
    {
        if(prime[i]==false)
        {
            for(j=i*i;j<=n;j+=i+i)
            {
                prime[j]=true;
            }
        }
    }
    prime[2]=true;
}
int main()
{
    siev();
    ll test,n,a,p,i;
    cin>>test;
    while(test--)
    {
           cin>>a;
           a--;
            while(prime[a])
            {
               a--;
            }
            cout<<a<<endl;
    }
}

