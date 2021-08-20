//Bismillahir Rahmanir Rahim
//Allahumma Rabbi Jhidni Elma
/*--------Please carefully check--------
    1.Overflow and underflow
    2.Corner test case
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long  ull;
typedef long double ld;
const ld PI = 2*acosl(0.0);
const int inf=2e5+7;
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
#define pf(a) printf("%d\n",a)
int main()
{
        int n,t,i,a,b,k,j,dif1,dif2,cn,sum;
        sc(t);
        while(t--)
        {
            sc(n),sc(k);
            vector<pair<int,int>>vec;
            for(i=0;i<n;i++)
            {
                sc(a),sc(b);
                vec.pb(make_pair(a,b));
            }
            cn=0;
            bool ans=0;
            for(i=0;i<n;i++)
            {
                ans=0;
                for(j=0;j<n;j++)
                {
                    dif1 = (vec[i].first-vec[j].first);
                    if(dif1<0) dif1 = (-1)*dif1;
                    dif2 = (vec[i].second-vec[j].second);
                    if(dif2<0) dif2=(-1)*dif2;
                    sum = dif1+dif2;
                    if(sum>k)
                    {
                        ans=1;
                    }
                }
                if(ans)
                {
                    cn++;
                }

            }
            cout<<cn<<endl;
            if(cn==n)
            {
                pf(-1);
            }
            else
                pf(1);
        }
}

