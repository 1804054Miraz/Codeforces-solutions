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
map<int,int>cnt;
int ar[101];
bool mark[101];
int main()
{
    int test,i,j,n;
    cin>>test;
    while(test--)
    {
        reset(ar);
        reset(mark);
        cnt.clear();
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
            cnt[ar[i]]++;
        }
    sort(ar,ar+n);
    bool ans=false;
    for(i=0;i<=n;i++)
    {
        if(cnt[i]%2==0 and cnt[i]!=0)
        {
           // mark[i]=true;
            ans=true;
            break;
        }
    }
    int sum=0;
    if(ans)
    {
        for(i=0;i<=n;i++)
        {
            if(cnt[i]%2 || cnt[i]==0)
            {
                if(cnt[i]==0 and ans)
                {
                    sum+=i*2;
                    break;
                }
                sum+=i;
                if(ans==false)
                    break;
                ans=false;
            }
        }
    }
    else
    {
      for(i=0;i<=n;i++)
        {
            if(cnt[i]==0)
            {
                sum +=i;
                break;
            }
        }
    }
    cout<<sum<<endl;
    }
}

