//Bismillahir Rahmanir Rahim
//Rabbi Jhidni Elma
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
const int mxN=2e5+5;
#define SIZE 26
#define FORBIDDEN -1
#define NOT_VISITED 0
#define VISITED 1
int main()
{
    int test,n,a,p,i,x;
    cin>>test;
    while(test--)
    {
        cin>>n>>x;
        if(n==1 || n==2)
        {
           p=0;
        }
        else
        {
            n = n-2;
            if(n%x!=0)
            p = n/x+1;
            else
                p = n/x;
        }
            cout<<p+1<<endl;
    }
}

