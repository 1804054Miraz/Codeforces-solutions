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
#define  _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long  ull;
typedef long double ld;
const ld PI = 2*acosl(0.0);
const int inf=2e9+7;
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
   int t,n,i,j;
   cin>>t;
   while(t--)
   {
       cin>>n;
       string st,st1;
       cin>>st;
       if(n==1 and st[0]=='?')
       {
           cout<<'B'<<endl;
           continue;
       }
       int l=0,r=0;
       string color="RB";
        for(i=0;i<n;i++)
        {
            int k=0;
            if(st[i]=='?')
            {
                l=i;
                while(i<n and st[i]=='?')
                {
                    //r=i;
                    i++;
                }
                r=i;
                if(l==0)
                {
                    if(r==n)
                    {
                        for(j=l;j<r;j++)
                        {
                            if(j%2)
                                st[j]='R';
                            else
                                st[j]='B';
                        }
                    }
                    else if(st[r]=='R')
                    {

                        for(j=r-1,k=1;j>=l;j--,k++)
                        {
                            st[j]=color[k%2];
                        }
                    }
                    else
                    {
                        for(j=r-1,k=0;j>=l;j--,k++)
                        {
                            st[j]=color[k%2];
                        }
                    }
                }
                else if(r==n)
                {
                    if(st[l-1]=='R')
                    {

                        for(j=l,k=1;j<n;j++,k++)
                        {
                            st[j]=color[k%2];
                        }
                    }
                    else
                    {
                        for(j=l,k=0;j<n;j++,k++)
                        {
                            st[j]=color[k%2];
                        }
                    }
                }
                else
                {
                    if(st[l-1]!=st[r])
                    {
                        if(st[l-1]=='R')
                        {
                           for(j=l,k=1;j<r;j++,k++)
                        {
                            st[j]=color[k%2];
                        }
                        }
                        else
                        {
                           for(j=l,k=0;j<r;j++,k++)
                        {
                            st[j]=color[k%2];
                        }
                        }
                    }
                    else
                    {
                         if(st[l-1]=='R')
                        {
                           for(j=l,k=1;j<r;j++,k++)
                        {
                            st[j]=color[k%2];
                        }
                        }
                        else
                        {
                           for(j=l,k=0;j<r;j++,k++)
                        {
                            st[j]=color[k%2];
                        }
                        }
                    }
                }
                i--;
            }
        }
        cout<<st<<endl;
   }
}

