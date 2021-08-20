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
    speed;
    int n,t,a,b,i,c,k,j,div,p;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>k;
        vector<int>vecA,vecB;
        vecA.pb(a), vecB.pb(b);
        for(i=2;i*i<=a;i++)
        {
            if(a%i==0)
            {
                vecA.pb(a/i);
            }
        }
        for(i=2;i*i<=b;i++)
        {
            if(b%i==0)
            {
                vecB.pb(b/i);
            }
        }
      //  cout<<vecA.size()<<endl<<vecB.size()<<endl;
        bool ans=false;
        for(i=0;i<vecA.size();i++)
        {
            for(j=0;j<vecB.size();j++)
            {

                if(vecA[i]==vecB[j] and k==2)
                {
                    ans=true;
                }
                else if(vecA[i]%vecB[j]==0)
                {
                     //cout<<vecA[i]<<" "<<vecB[j]<<endl;
                    int l,cn=2;
                    div=vecA[i]/vecB[j];
                    p=div;
                    if(vecA[i]==a)
                        cn--;
                    if(vecB[j]==b)
                        cn--;
                    if(cn+1==k and div>1)
                    {
                        ans=true;
                        continue;
                    }
                    for(l=2;l<=div;)
                    {
                        if(p%l==0)
                        {
                            p/=l;
                            cn++;
                        }
                        else
                            l++;
                    }
                    if(cn==k)
                    {
                        ans=true;
                    }
                   // cout<<"Cn = "<<cn<<endl;
                }
                else if(vecB[j]%vecA[i]==0)
                {
                     //cout<<vecB[j]<<" "<<vecA[i]<<endl;
                    div=vecB[j]/vecA[i];
                    int l,cn=2;
                    p=div;
                    if(vecA[i]==a)
                        cn--;
                    if(vecB[j]==b)
                        cn--;
                    if(cn+1==k and div>1)
                    {
                        ans=true;
                        continue;
                    }
                    for(l=2;l<=div;)
                    {
                        if(p%l==0)
                        {
                            p/=l;
                            cn++;
                        }
                        else
                            l++;
                    }
                    if(cn==k)
                    {
                        ans=true;
                    }
                    //cout<<"Cn = "<<cn<<endl;
                }
            }
        }
        if(ans)
        {
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
        vecA.clear(), vecB.clear();
    }
}

