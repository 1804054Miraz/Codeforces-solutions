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
//cout<<"Case "<<cas<<": "<<
int main()
{
    int n,t,first,second,cnt,dif,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string st,tmp;
        cin>>st;
        bool ans=false;
        for(i=0;i<=4;i++)
        {
            tmp = st.substr(0,i)+st.substr(n-4+i);
           // cout<<tmp<<endl;
            if(tmp=="2020")
            {
                ans=true;
                break;
            }
        }
        if(ans)
        {
             cout<<"YES\n";

        }
        else
        {
            cout<<"NO\n";
        }

    }
}

