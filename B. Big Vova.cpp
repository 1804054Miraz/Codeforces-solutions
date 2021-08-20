///Bismillahir Rahmanir Rahim
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
bool mark[1001];
vector<int>vec;

int main()
{
    speed;
    int test,n,i,j;
    cin>>test;
    while(test--)
    {
        cin>>n;
        int ar[n];
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        reverse(ar,ar+n);
       reset(mark);
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(mark[j]==0 and ar[i]%ar[j]==0)
                {
                    vec.pb(ar[j]);
                    mark[j]=1;
                }
            }
            }
        }
        if(mark[n-1]==0)
            ,mk
            n
            jhyg v  .,mknbh
        {
            vec.pb(ar[n-1]);
        }
        reverse(vec.begin(),vec.end());
        vector<int>::iterator it=vec.end();
        it--;
        while(!vec.empty())
        {
            cout<<*it--<<" ";

            vec.pop_back();
        }
        cout<<endl;
    }
}

