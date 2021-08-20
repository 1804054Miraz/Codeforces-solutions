//Bismillahir Rahmanir Rahim
//Allahumma Rabbi Jhidni Elma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long  ull;
typedef long double ld;
const ld PI = 2*acosl(0.0);
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
#define digit2(x) floor((log2(x)))
#define sc(a) scanf("%d",&a)
int main()
{
    int t,n,q,l,r,i;
    sc(t);
    while(t--)
    {
        sc(n),sc(q);
        string st;
        cin>>st;
        while(q--)
        {
            sc(l),sc(r);
            l--,r--;
            bool ans=false;
            for(i=l-1;i>=0;i--)
            {
                if(st[i]==st[l])
                {
                    ans=true;
                }
            }
            for(i=r+1;i<n;i++)
            {

                if(st[i]==st[r])
                {
                    ans=true;
                }
            }
            if(ans)
            {
                printf("YES\n");
            }
            else
                printf("NO\n");
        }
    }
}

