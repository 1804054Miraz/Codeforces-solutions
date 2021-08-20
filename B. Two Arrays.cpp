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
//bool mark[100005];
int main()
{
    speed;
    ll test,n,a,p,i,t,cn;
    cin>>test;
    while(test--)
    {
        cin>>n>>t;
        ll ar[n];
        //reset(mark);
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        if(t%2)
        {
            for(i=0;i<n;i++)
            {
                if(ar[i]%2)
                {
                    cout<<0<<" ";
                }
                else
                    cout<<1<<" ";
            }
        }
        else
        {
            p = t/2;
            cn=0;
            for(i=0;i<n;i++)
            {
                if(ar[i]<p)
                {
                    cout<<"0 ";
                }
                else if(ar[i]>p)
                {
                    cout<<"1 ";
                }
                else if(ar[i]==p)
                        {
                          if(cn)
                            {
                                cout<<"1 ";
                                cn=0;
                            }
                            else
                            {
                                cout<<"0 ";
                                cn=1;
                            }
                        }
            }
        }
        cout<<endl;
    }
}

