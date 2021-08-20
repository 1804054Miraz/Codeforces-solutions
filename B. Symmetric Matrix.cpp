
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
    speed;
    int test,n,i,a,b,c,d,m;
    cin>>test;
    while(test--)
    {
        cin>>n>>m;
        bool ans = false;
        while(n--){
        cin>>a>>b>>c>>d;
        if(b==c)
        {
            ans = true;
        }
        }
        if(m%2)
        {
            cout<<"NO\n";
        }
        else
        {
            if(ans)
            {
                cout<<"YES\n";
            }
            else
                cout<<"NO\n";
        }

    }
}
