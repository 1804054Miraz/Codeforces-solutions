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
    int t,n,j,i,f,k,curr;
    cin>>t;
    while(t--)
    {
        string st;
        cin>>st;
        n = st.size();
        int cnt[10];
        reset(cnt);
        for(i=0;i<n;i++)
        {
            curr=st[i]-'0';
            //cout<<curr<<endl;
            cnt[curr] += 1;

        }
        int mx=0;
        for(i=0;i<=9;i++)
        {
             mx=max(cnt[i],mx);
            // cout<<cnt[i]<<" ";
        }
       // cout<<mx<<endl;
        int cn=0;
        vector<int>vec;
        vec.pb(n-mx);
        for(i=0;i<=8;i++)
        {
            for(j=i+1;j<=9;j++)
            {
                f=i;cn=0;int cycle=1;
                for(k=0;k<n;k++)
                {
                    curr=st[k]-'0';
                  // cout<<cycle<<" "<<curr<<" "<<f<<endl;
                   if(cycle==1 and curr==f)
                   {
                       f=j;
                       cycle=2;
                   }
                   else if(cycle==2 and curr==f)
                   {
                       f=i;
                       cn++;
                       cycle=1;
                       //cout<<cn<<endl;
                   }
                }
               //cout<<cn<<endl;
                if(cn){
                vec.pb(n-2*cn);
                }

                f=j, cn=0, cycle=1;
                for(k=0;k<n;k++)
                {
                    curr=st[k]-'0';
                 // cout<<curr<<" "<<f<<endl;
                   if(cycle==1 and curr==f)
                   {
                       f=i;
                       cycle=2;
                   }
                   else if(cycle==2 and curr==f)
                   {
                       f=j;
                       cn++;
                       cycle=1;
                      // cout<<cn<<endl;
                   }
                }
               // cout<<cn<<endl;
                if(cn){
                vec.pb(n-2*cn);
                }
               // cout<<i<<" "<<j<<endl;
                //cout<<j<<" "<<i<<endl;
            }
        }
       // cout<<vec.size()<<endl;
        int mn=10000000;
        for(i=0;i<vec.size();i++)
        {
            mn = min(mn,vec[i]);
        }
        cout<<mn<<endl;

    }
}

