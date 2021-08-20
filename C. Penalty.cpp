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
const int mod=998244353;
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
    int n,i,t;
    cin>>t;
    while(t--)
    {
        string st,temp;
        cin>>st;
        n = st.size();
        int team1[11],team2[11];
        reset(team1),reset(team2);


        for(i=0;i<n;i++)
        {
           if(i%2==0 and st[i]=='1')
           {
               team1[i+1] = team1[i]+1;
           }
           else
            team1[i+1]=team1[i];
        }

        for(i=0;i<n;i++)
        {
           if(i%2 and st[i]=='1')
           {
               team2[i+1] = team2[i]+1;
           }
           else
            team2[i+1]=team2[i];
        }
        /*for(i=1;i<=10;i++)
        {
            cout<<team1[i]<<" "<<team2[i]<<endl;
        }
        cout<<endl;*/
        ///pref represent team1
        int pref[11],cn=0;
        reset(pref);
        for(i=1;i<=10;i++)
        {
           pref[i]=team1[i];
           //cout<<pref[i]<<endl;
        }
        pref[0]=pref[1];

        for(i=0;i<n;i++)
        {
            //cout<<st[i]<<endl;
           if(i%2==0 and st[i]=='?')
           {
               cn++;
           }
            pref[i+1]+=cn;
        }
        pref[i+1]+=cn;
        for(i=1;i<=10;i++)
        {
            if(i==6 and abs(pref[i]-team2[i])>=3)
            {
                break;
            }
            if(i==7 and ((pref[i]-team2[i])>=3 || (team2[i]-pref[i])>=2))
            {
                break;
            }
            if(i==8 and abs(pref[i]-team2[i])>=2)
                break;
            if(i==9 and ((pref[i]-team2[i])>=2 || (team2[i]-pref[i])>=1))
            {
                break;
            }
            if(i==10 and abs(pref[i]-team2[i])>=2)
                break;
        }
         int ans=1000000000;
        ans = min(ans,i);
      /*  for(i=1;i<=10;i++)
        {
            cout<<pref[i]<<" "<<team2[i]<<endl;
        }
        cout<<endl;*/
        ///pref represent team2
        for(i=1;i<=10;i++)
        {
           pref[i]=team2[i];
        }
        cn=0;
        pref[0]=pref[1];
        for(i=0;i<n;i++)
        {
           if(i%2 and st[i]=='?')
           {
               cn++;
           }
            pref[i+1]+=cn;
        }
        pref[i+1]+=cn;
        for(i=1;i<=10;i++)
        {
            if(i==6 and abs(team1[i]-pref[i])>=3)
            {
                break;
            }
            if(i==7 and ((team1[i]-pref[i])>=3 || (pref[i]-team1[i])>=2))
            {
                break;
            }
            if(i==8 and abs(team1[i]-pref[i])>=2)
                break;
            if(i==9 and ((team1[i]-pref[i])>=2 || (pref[i]-team1[i])>=1))
            {
                break;
            }
            if(i==10 and abs(team1[i]-pref[i])>=2)
                break;
        }
        ans = min(i,ans);
        ans = min(10,ans);
       /* for(i=1;i<=10;i++)
        {
            cout<<team1[i]<<" "<<pref[i]<<endl;
        }*/
        cout<<ans<<endl;
    }
}

