//Bismillahir Rahmanir Rahim
//Allahumma Rabbi Jhidni Elma
/*--------Please carefully check--------
    1.Overflow and underflow
    2.Corner test case
    3. divide zero
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
#define DEBUG 0
//cout<<"Case "<<cas<<": "<<
int ar[100002];
int main()
{
    int t,n,m,i,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int cn=0,cn_2=0;
        for(i=1;i<=m;i++)
        {
            cin>>x>>y;
            if(x!=y){
            ar[x]++;
            ar[y]++;
            cn++;
            }
        }
        bool ans=false;
        for(i=1;i<=n;i++)
        {
            if(ar[i]==1)
            {
                ans = true;
                break;
            }
        }
        //cout<<"ha = "<<cn<<" "<<cn_2<<ans<<endl;
        if(ans)
        {
            cout<<cn<<endl;
        }
        else
        {
            if(cn%2==0)
            {
                cout<<(3*cn)/2<<endl;
            }
            else
                cout<<3*(cn/2)+1<<endl;
        }
        reset(ar);
    }
}

